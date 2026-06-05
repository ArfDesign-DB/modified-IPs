#!/usr/bin/env python3
"""Merge per-test SRAM functional coverage JSON files into a final report."""

import argparse
import glob
import json
from pathlib import Path

REQUIRED_BINS = [
    "READ",
    "WRITE",
    "BYTE0",
    "BYTE1",
    "BYTE2",
    "BYTE3",
    "HALFWORD_LOW",
    "HALFWORD_HIGH",
    "FULL_WORD",
    "SRAM_ADDR",
    "SRAM_FIRST_WORD",
    "SRAM_LAST_WORD",
    "LOW_ADDR",
    "MID_ADDR",
    "HIGH_ADDR",
    "INVALID_ADDR",
    "BOOT_ROM_ADDR",
    "SPI_FLASH_XIP_ADDR",
    "UART_ADDR",
    "GPIO_ADDR",
    "RV_TIMER_ADDR",
    "SPI_CONTROL_ADDR",
    "I2C_ADDR",
    "SPI_HOST_ADDR",
    "UNMAPPED_ADDR",
    "WRITE_BYTE0",
    "WRITE_BYTE1",
    "WRITE_BYTE2",
    "WRITE_BYTE3",
    "WRITE_FULLWORD",
    "WRITE_OTHER",
    "READ_FULLWORD",
]

GROUPS = {
    "read_write": [
        "READ",
        "WRITE",
    ],
    "byte_enable": [
        "BYTE0",
        "BYTE1",
        "BYTE2",
        "BYTE3",
        "HALFWORD_LOW",
        "HALFWORD_HIGH",
        "FULL_WORD",
    ],
    "sram_address": [
        "SRAM_ADDR",
        "SRAM_FIRST_WORD",
        "SRAM_LAST_WORD",
        "LOW_ADDR",
        "MID_ADDR",
        "HIGH_ADDR",
    ],
    "memory_map_rejects": [
        "INVALID_ADDR",
        "BOOT_ROM_ADDR",
        "SPI_FLASH_XIP_ADDR",
        "UART_ADDR",
        "GPIO_ADDR",
        "RV_TIMER_ADDR",
        "SPI_CONTROL_ADDR",
        "I2C_ADDR",
        "SPI_HOST_ADDR",
        "UNMAPPED_ADDR",
    ],
    "cross_rw_byte_enable": [
        "WRITE_BYTE0",
        "WRITE_BYTE1",
        "WRITE_BYTE2",
        "WRITE_BYTE3",
        "WRITE_FULLWORD",
        "WRITE_OTHER",
        "READ_FULLWORD",
    ],
}


def load_coverage_file(path):
    with path.open("r", encoding="utf-8") as coverage_file:
        data = json.load(coverage_file)

    return {key: int(value) for key, value in data.items()}


def merge_coverage(paths):
    merged = {}
    per_test = {}

    for path in paths:
        data = load_coverage_file(path)
        per_test[path.name] = data

        for key, value in data.items():
            merged[key] = merged.get(key, 0) + value

    return merged, per_test


def group_summary(merged):
    summary = {}

    for group_name, bins in GROUPS.items():
        hit_bins = [bin_name for bin_name in bins if merged.get(bin_name, 0) > 0]
        missed_bins = [bin_name for bin_name in bins if merged.get(bin_name, 0) == 0]
        summary[group_name] = {
            "covered_bins": len(hit_bins),
            "total_bins": len(bins),
            "coverage_percent": round((len(hit_bins) * 100.0) / len(bins), 2),
            "hit_bins": hit_bins,
            "missed_bins": missed_bins,
        }

    return summary


def write_json_report(path, input_files, merged, per_test, summary):
    total_required = len(REQUIRED_BINS)
    total_hit = len([bin_name for bin_name in REQUIRED_BINS if merged.get(bin_name, 0) > 0])

    report = {
        "input_files": [str(path) for path in input_files],
        "summary": {
            "covered_bins": total_hit,
            "total_bins": total_required,
            "coverage_percent": round((total_hit * 100.0) / total_required, 2),
        },
        "groups": summary,
        "merged_bins": {key: merged[key] for key in sorted(merged)},
        "per_test_bins": per_test,
    }

    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8") as report_file:
        json.dump(report, report_file, indent=2, sort_keys=True)
        report_file.write("\n")


def write_text_report(path, input_files, merged, summary):
    total_required = len(REQUIRED_BINS)
    total_hit = len([bin_name for bin_name in REQUIRED_BINS if merged.get(bin_name, 0) > 0])
    total_percent = round((total_hit * 100.0) / total_required, 2)

    lines = [
        "========================================",
        " FINAL FUNCTIONAL COVERAGE REPORT",
        "========================================",
        f"Input files            : {len(input_files)}",
        f"Required bins covered : {total_hit}/{total_required} ({total_percent:.2f}%)",
        "",
        "Group Summary:",
    ]

    for group_name, data in summary.items():
        lines.append(
            f"  {group_name:<22}: "
            f"{data['covered_bins']}/{data['total_bins']} "
            f"({data['coverage_percent']:.2f}%)"
        )

    lines.extend([
        "",
        "Merged Bin Counts:",
    ])

    for bin_name in sorted(merged):
        lines.append(f"  {bin_name:<25}: {merged[bin_name]}")

    lines.extend([
        "",
        "Missed Required Bins:",
    ])

    missed = [bin_name for bin_name in REQUIRED_BINS if merged.get(bin_name, 0) == 0]
    if missed:
        for bin_name in missed:
            lines.append(f"  {bin_name}")
    else:
        lines.append("  None")

    lines.append("========================================")

    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8") as report_file:
        report_file.write("\n".join(lines))
        report_file.write("\n")


def parse_args():
    parser = argparse.ArgumentParser(
        description="Merge functional coverage JSON files into final JSON and text reports."
    )
    parser.add_argument(
        "patterns",
        nargs="*",
        default=["functional_coverage_tc_*.json"],
        help="Input coverage JSON glob patterns. Defaults to functional_coverage_tc_*.json.",
    )
    parser.add_argument(
        "--json-out",
        default="reports/final_functional_coverage.json",
        help="Output merged JSON report path.",
    )
    parser.add_argument(
        "--text-out",
        default="reports/final_functional_coverage.txt",
        help="Output merged text report path.",
    )
    return parser.parse_args()


def main():
    args = parse_args()
    input_files = []

    for pattern in args.patterns:
        input_files.extend(Path(path) for path in glob.glob(pattern))

    input_files = sorted(set(input_files))
    if not input_files:
        raise SystemExit("No functional coverage files matched the requested patterns")

    merged, per_test = merge_coverage(input_files)
    summary = group_summary(merged)

    write_json_report(Path(args.json_out), input_files, merged, per_test, summary)
    write_text_report(Path(args.text_out), input_files, merged, summary)

    print(f"[COV] Wrote {args.json_out}")
    print(f"[COV] Wrote {args.text_out}")


if __name__ == "__main__":
    main()
