#!/usr/bin/env python3
import sys
import json
import glob
from collections import Counter

EXPECTED_BINS = [
    "c_cmd_read",
    "c_cmd_write",
    "c_addr_region_low",
    "c_addr_region_mid",
    "c_addr_region_high",
    "c_read_req_to_rvalid",
    "c_spi_transaction",
    "c_spi_clock_toggle"
]

def merge_json_coverage(input_pattern, output_file):
    merged_counts = Counter()
    files = glob.glob(input_pattern)

    if not files:
        print(f"[WARN] No JSON coverage files found matching {input_pattern}")
        return

    # Read and accumulate all bins from all files
    for f in files:
        try:
            with open(f, 'r') as file:
                data = json.load(file)
                merged_counts.update(data)
        except Exception as e:
            print(f"[ERROR] Failed to process {f}: {e}")

    # Sort alphabetically by key for readability
    sorted_merged = dict(sorted(merged_counts.items()))

    # Write the final merged JSON file
    with open(output_file, 'w') as out:
        json.dump(sorted_merged, out, indent=2)

    # Calculate Percentage
    covered_bins = sum(1 for bin_name in EXPECTED_BINS if merged_counts.get(bin_name, 0) > 0)
    total_bins = len(EXPECTED_BINS)
    coverage_pct = (covered_bins / total_bins) * 100 if total_bins > 0 else 0.0

    # Write summary
    summary_file = output_file.replace('.json', '_summary.txt')
    with open(summary_file, 'w') as out:
        out.write(f"Functional Coverage: {covered_bins}/{total_bins} bins hit ({coverage_pct:.2f}%)\n")

    print(f"[SUCCESS] Merged functional coverage saved to: {output_file}")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: merge_functional_cov.py <input_glob_pattern> <output_file>")
        sys.exit(1)
        
    merge_json_coverage(sys.argv[1], sys.argv[2])
