#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
ROOT_DIR=$(cd "${SCRIPT_DIR}/.." && pwd)
cd "${SCRIPT_DIR}"

usage() {
    cat <<USAGE
Usage:
  ./sim/run.sh --test <TEST_NAME>
  ./sim/run.sh --regression

Examples:
  ./sim/run.sh --test TC_001_spi_flash_xip_read_test
  ./sim/run.sh --regression
USAGE
}

TESTS=(
  TC_001_spi_flash_xip_read_test
  TC_002_spi_flash_xip_back_to_back_read_test
  TC_003_spi_flash_xip_reset_mid_transaction_test
  TC_004_spi_flash_xip_decode_and_write_test
)

run_one() {
    local t="$1"
    echo "[INFO] Running ${t}"
    make clean >/dev/null
    make run TEST="${t}"
}

if [[ $# -lt 1 ]]; then
    usage
    exit 1
fi

case "$1" in
    --test)
        [[ $# -eq 2 ]] || { usage; exit 1; }
        run_one "$2"
        ;;

    --regression)
        rm -rf ../coverage
        mkdir -p ../coverage

        PASS_COUNT=0
        FAIL_COUNT=0

        for t in "${TESTS[@]}"; do
            echo "[INFO] Running ${t}"
            if make clean >/dev/null && make run TEST="${t}"; then
                PASS_COUNT=$((PASS_COUNT+1))
            else
                echo "[FAIL] ${t}"
                FAIL_COUNT=$((FAIL_COUNT+1))
            fi
        done

        echo "========================================"
        echo "[INFO] Regression complete"
        echo "[INFO] PASS=${PASS_COUNT} FAIL=${FAIL_COUNT}"
        echo "========================================"

        # 1. Merge Verilator Code Coverage
        if command -v verilator_coverage >/dev/null 2>&1; then
            verilator_coverage --write ../coverage/merged_code.dat ../coverage/*_code_coverage.dat
            verilator_coverage ../coverage/merged_code.dat > ../coverage/final_code_coverage.txt
            echo "[SUCCESS] Saved: coverage/final_code_coverage.txt"

	    echo ""
            echo "========================================"
            echo "          CODE COVERAGE REPORT          "
            echo "========================================"
            cat ../coverage/final_code_coverage.txt
        else
            echo "[WARN] verilator_coverage not installed"
        fi

        # 2. Merge C++ Functional Coverage (JSON)
        echo "========================================"
        echo "       FUNCTIONAL COVERAGE REPORT       "
        echo "========================================"
        
        python3 merge_functional_cov.py "../coverage/*_functional_coverage.json" "../coverage/final_functional_coverage.json"
        
        echo ""
        cat ../coverage/final_functional_coverage.json
        echo ""
        echo "----------------------------------------"
        cat ../coverage/final_functional_coverage_summary.txt
        echo "========================================"
        ;;

    -h|--help)
        usage
        ;;
    *)
        usage
        exit 1
        ;;
esac

echo "[INFO] Waveforms are available under ${ROOT_DIR}/wave"
echo "[INFO] Coverage artifacts are available under ${ROOT_DIR}/coverage"
