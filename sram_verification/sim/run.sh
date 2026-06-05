#!/bin/bash

set -e

# =========================================================
# SRAM CONTROLLER DV REGRESSION SCRIPT
# =========================================================

GREEN='\033[0;32m'
RED='\033[0;31m'
BLUE='\033[1;34m'
NC='\033[0m'

PASS_COUNT=0
FAIL_COUNT=0

# Avoid stale C++ objects when headers such as sw/memory_map.h change.
# Verilator's generated makefiles honor OBJCACHE; keeping it empty forces
# a direct compile instead of reusing a ccache entry from an older map.
export OBJCACHE=

# =========================================================
# TEST EXECUTION FUNCTION
# =========================================================

run_test() {

TEST=$1

echo ""
echo "=================================================="
echo -e "${BLUE}[DV] Running $TEST${NC}"
echo "=================================================="

case $TEST in

TC_SRAM_CON_001)
SRC=tc_sram_con_001_reset.cpp
OUT=sim_001
;;

TC_SRAM_CON_002)
SRC=tc_sram_con_002_read_write.cpp
OUT=sim_002
;;

TC_SRAM_CON_003)
SRC=tc_sram_con_003_byte_enable.cpp
OUT=sim_003
;;

TC_SRAM_CON_004)
SRC=tc_sram_con_004_back_to_back.cpp
OUT=sim_004
;;

TC_SRAM_CON_005)
SRC=tc_sram_con_005_boundary.cpp
OUT=sim_005
;;

TC_SRAM_CON_006)
SRC=tc_sram_con_006_error_handling.cpp
OUT=sim_006
;;

TC_SRAM_CON_007)
SRC=tc_sram_con_007_random_stress.cpp
OUT=sim_007
;;

TC_SRAM_CON_008)
SRC=tc_sram_con_008_memory_map.cpp
OUT=sim_008
;;

*)
echo -e "${RED}[ERROR] Invalid test: $TEST${NC}"
exit 1
;;

esac

# =========================================================
# CLEAN
# =========================================================

rm -rf obj_dir

# =========================================================
# BUILD
# =========================================================

echo "[DV] Building..."

verilator -Wall --cc --trace --exe --build --timing \
--coverage \
-Wno-UNDRIVEN \
-Wno-UNUSEDSIGNAL \
-Wno-UNUSEDPARAM \
-Wno-BLKSEQ \
../rtl/sram_controller.sv \
../tb/tb_top.sv \
../tb/clk_rst.sv \
../sw/$SRC \
--top-module tb_top \
-o $OUT

# =========================================================
# RUN
# =========================================================

echo "[DV] Running simulation..."

if ./obj_dir/$OUT ; then

    echo -e "${GREEN}[RESULT] $TEST PASSED${NC}"
    PASS_COUNT=$((PASS_COUNT+1))

else

    echo -e "${RED}[RESULT] $TEST FAILED${NC}"
    FAIL_COUNT=$((FAIL_COUNT+1))

fi

}

# =========================================================
# MAIN
# =========================================================

if [ -z "$1" ]; then

echo "=================================================="
echo " SRAM CONTROLLER DV"
echo "=================================================="
echo ""
echo "Usage:"
echo "  ./run.sh TC_SRAM_CON_001"
echo "  ./run.sh TC_SRAM_CON_008"
echo "  ./run.sh regress"
echo ""
exit 1

fi

# =========================================================
# REGRESSION
# =========================================================

if [ "$1" == "regress" ]; then

echo ""
echo "=================================================="
echo " SRAM CONTROLLER FULL REGRESSION"
echo "=================================================="

run_test TC_SRAM_CON_001
run_test TC_SRAM_CON_002
run_test TC_SRAM_CON_003
run_test TC_SRAM_CON_004
run_test TC_SRAM_CON_005
run_test TC_SRAM_CON_006
run_test TC_SRAM_CON_007
run_test TC_SRAM_CON_008

echo ""
echo "=================================================="
echo " REGRESSION SUMMARY"
echo "=================================================="

echo -e "${GREEN}PASS : $PASS_COUNT${NC}"
echo -e "${RED}FAIL : $FAIL_COUNT${NC}"

if [ $FAIL_COUNT -eq 0 ]; then
    echo -e "${GREEN}==== ALL TESTS PASSED ====${NC}"
else
    echo -e "${RED}==== SOME TESTS FAILED ====${NC}"
fi

echo "=================================================="

exit 0

fi

# =========================================================
# SINGLE TEST
# =========================================================

run_test $1
