#!/bin/bash

ROOT_DIR=$(pwd)
TB_DIR=../tb
RTL_DIR=../rtl
SW_DIR=../sw

WAVE_DIR=../waves
COV_DIR=coverage

TEST_LIST=(
    TC_001_bootrom_addr_sweep_test
    TC_002_bootrom_corner_pattern_test
    TC_003_bootrom_random_access_test
)

PASS_COUNT=0
FAIL_COUNT=0

mkdir -p ${WAVE_DIR}
mkdir -p ${COV_DIR}

run_test() {

    TEST=$1

    echo ""
    echo "=================================================="
    echo " RUNNING TEST : ${TEST}"
    echo "=================================================="

    mkdir -p ${COV_DIR}/${TEST}

    # Clean previous build + waves for fresh run
    rm -rf obj_dir
    rm -f ${WAVE_DIR}/*.vcd

    # Build software
    cd ${SW_DIR}

    rm -f *.elf *.mem *.dump

    riscv32-unknown-elf-gcc \
        -march=rv32imc \
        -mabi=ilp32 \
        -nostdlib \
        -nostartfiles \
        -T linker.ld \
        -o boot.elf \
        boot.S

    riscv32-unknown-elf-objcopy \
        -O verilog \
        boot.elf \
        boot.mem

    riscv32-unknown-elf-objdump \
        -d boot.elf > boot.dump

    cd ${ROOT_DIR}

    # Compile RTL + TB
    verilator \
        -Wall \
        --trace \
        --timing \
        --coverage \
        --coverage-line \
        --coverage-toggle \
        --coverage-expr \
        --top-module boot_rom \
        -cc ${RTL_DIR}/boot_rom.sv \
        --exe ${TB_DIR}/${TEST}.cpp

    make -s -C obj_dir -f Vboot_rom.mk Vboot_rom

    # Run simulation
    ./obj_dir/Vboot_rom

    # Move coverage DB
    if [ -f ${TEST}.dat ]; then
        mv ${TEST}.dat ${COV_DIR}/${TEST}/${TEST}.dat
    elif [ -f obj_dir/${TEST}.dat ]; then
        mv obj_dir/${TEST}.dat ${COV_DIR}/${TEST}/${TEST}.dat
    else
        echo "ERROR: Coverage DB not generated"
        return 1
    fi

    # Move functional coverage info
    if [ -f ${TEST}.info ]; then
        mv ${TEST}.info ${COV_DIR}/${TEST}/coverage.info
    fi

    echo ""
    echo "=================================================="
    echo " COVERAGE SUMMARY : ${TEST}"
    echo "=================================================="

    # Generate annotated RTL coverage
	verilator_coverage \
    		--annotate ${COV_DIR}/${TEST}/annotated \
    		${COV_DIR}/${TEST}/${TEST}.dat

    # Generate LCOV/info + summary
	verilator_coverage \
    		--write-info ${COV_DIR}/${TEST}/coverage.info \
    		${COV_DIR}/${TEST}/${TEST}.dat \
    2>&1 | tee ${COV_DIR}/${TEST}/summary.txt

    #Generate RTL coverage report
    #verilator_coverage \
    #    --annotate ${COV_DIR}/${TEST}/annotated \
    #    ${COV_DIR}/${TEST}/${TEST}.dat \
    #    | tee ${COV_DIR}/${TEST}/summary.txt

    #echo ""
    #echo "=================================================="
    #echo " COVERAGE SUMMARY : ${TEST}"
    #echo "=================================================="

    #cat ${COV_DIR}/${TEST}/summary.txt

    echo ""
    echo "--------------------------------------------------"
    echo " TEST PASSED : ${TEST}"
    echo "--------------------------------------------------"

    echo ""
    echo "Waveform:"
    echo "  waves/${TEST}.vcd"

    echo ""
    echo "Coverage in .dat format :"
    echo "  sim/${COV_DIR}/${TEST}/${TEST}.dat"

    echo ""
    echo "Coverage in .info format:"
    echo "  sim/${COV_DIR}/${TEST}/coverage.info"

    echo ""
    echo "Coverage annoted RTl:"
    echo "  sim/${COV_DIR}/${TEST}/annotated/"

    PASS_COUNT=$((PASS_COUNT + 1))

    # Open waveform only for single test run
    if [ "$MODE" == "single" ]; then
        gtkwave ${WAVE_DIR}/${TEST}.vcd &
    fi
}

    merge_regression_coverage() {

    mkdir -p ${COV_DIR}/final_vcode

    echo ""
    echo "--------------------------------------------------"
    echo " MERGING VERILATED COVERAGE"
    echo "--------------------------------------------------"

    verilator_coverage \
        --write ${COV_DIR}/final_vcode/merged_code_cov.dat \
        ${COV_DIR}/TC_001_bootrom_addr_sweep_test/TC_001_bootrom_addr_sweep_test.dat \
        ${COV_DIR}/TC_002_bootrom_corner_pattern_test/TC_002_bootrom_corner_pattern_test.dat \
        ${COV_DIR}/TC_003_bootrom_random_access_test/TC_003_bootrom_random_access_test.dat

    echo ""
    echo "=================================================="
    echo " FINAL VEIRLATED CODE COVERAGE SUMMARY "
    echo "=================================================="

    echo ""
    echo "Merged Code Coverage Metrics:"
    verilator_coverage \
	    ${COV_DIR}/final_vcode/merged_code_cov.dat

    verilator_coverage \
    	--annotate ${COV_DIR}/final_vcode/annotated \
    	--write-info ${COV_DIR}/final_vcode/final_code_cov.info \
    	${COV_DIR}/final_vcode/merged_code_cov.dat \
    	2>&1 | tee ${COV_DIR}/final_vcode/final_summary.txt

    #verilator_coverage \
    #    --annotate ${COV_DIR}/final/annotated \
    #    ${COV_DIR}/final/merged.dat \
    #    | tee ${COV_DIR}/final/final_summary.txt

    #echo ""
    #echo "=================================================="
    #echo " FINAL REGRESSION COVERAGE SUMMARY"
    #echo "=================================================="

    #cat ${COV_DIR}/final/final_summary.txt

    echo ""
    echo "--------------------------------------------------"
    echo " FINAL VERILATED{CODE} COVERAGE DIR "
    echo "--------------------------------------------------"

    echo ""
    echo "Merged Coverage DB:"
    echo "  sim/${COV_DIR}/final_vcode/merged_code_cov.dat"

    echo ""
    echo "Merged Annotated Report:"
    echo "  sim/${COV_DIR}/final_vcode/annotated/"

    echo ""
    echo "Merged Info:"
    echo "  sim/${COV_DIR}/final_vcode/final_code_cov.info"
}

     merge_functional_coverage() {

    mkdir -p ${COV_DIR}/final_fcov

    FINAL_FCOV=${COV_DIR}/final_fcov/final_fcov.txt

    BIN0=0
    BIN1=0
    BIN2=0
    BIN3=0

    C0=0
    C1=0

    P155=0
    P2AA=0

    echo ""
    echo "--------------------------------------------------"
    echo " MERGING FUNCTIONAL COVERAGE"
    echo "--------------------------------------------------"

    for TEST in "${TEST_LIST[@]}"
    do

        FILE=${COV_DIR}/${TEST}/fcov.txt

        [ ! -f $FILE ] && continue

        grep -q "ADDR_BIN_0 : HIT" $FILE && BIN0=1
        grep -q "ADDR_BIN_1 : HIT" $FILE && BIN1=1
        grep -q "ADDR_BIN_2 : HIT" $FILE && BIN2=1
        grep -q "ADDR_BIN_3 : HIT" $FILE && BIN3=1

        grep -q "CORNER_000 : HIT" $FILE && C0=1
        grep -q "CORNER_3FF : HIT" $FILE && C1=1

        grep -q "PATTERN_155 : HIT" $FILE && P155=1
        grep -q "PATTERN_2AA : HIT" $FILE && P2AA=1

    done

    HIT=$((BIN0 + BIN1 + BIN2 + BIN3 + C0 + C1 + P155 + P2AA))
    TOTAL=8

    FCOV=$((100 * HIT / TOTAL))

    cat > ${FINAL_FCOV} << EOF
========================================
 FINAL FUNCTIONAL COVERAGE REPORT
========================================

ADDR_BIN_0=${BIN0}
ADDR_BIN_1=${BIN1}
ADDR_BIN_2=${BIN2}
ADDR_BIN_3=${BIN3}

CORNER_000=${C0}
CORNER_3FF=${C1}

PATTERN_155=${P155}
PATTERN_2AA=${P2AA}

----------------------------------------
FUNCTIONAL COVERAGE = ${FCOV}%
----------------------------------------
EOF

    echo ""
    echo "Merged Functional Coverage:"
    cat ${FINAL_FCOV}
}


# ==================================================
# MAIN
# ==================================================

if [ $# -eq 0 ]; then
    echo "Usage:"
    echo "./run.sh regress"
    echo "./run.sh <test_name>"
    exit 1
fi

if [ "$1" == "regress" ]; then

    MODE="regress"

    echo ""
    echo "=================================================="
    echo " BOOT ROM FULL REGRESSION"
    echo "=================================================="

    for TEST in "${TEST_LIST[@]}"
    do
        run_test ${TEST}
    done

    merge_regression_coverage
    merge_functional_coverage

    echo ""
    echo "=================================================="
    echo " REGRESSION SUMMARY"
    echo "=================================================="

    echo ""
    echo "TOTAL TESTS : ${#TEST_LIST[@]}"
    echo "PASSED      : ${PASS_COUNT}"
    echo "FAILED      : ${FAIL_COUNT}"

else

    MODE="single"

    run_test $1

fi
