# Full Adder Verification using Verilator + CMake + GTKWave

This project demonstrates a **complete hardware verification flow** using:

* **SystemVerilog (RTL design)**
* **Verilator (simulation)**
* **CMake (build system)**
* **C++ (testbench)**
* **GTKWave (waveform visualization)**

The Design Under Test (DUT) is a **1-bit Full Adder implemented using two Half Adders**.

---

## 📁 Project Structure

```text
full_adder_verif/
├── CMakeLists.txt
├── rtl/
│   ├── half_adder.sv
│   └── full_adder.sv
├── tb/
│   └── tb_full_adder.cpp
├── build/              # Generated after build
└── run.sh              # Optional helper script
```

---

## 🧠 Design Overview

### Half Adder

* Inputs: `a`, `b`
* Outputs:

  * `sum = a ^ b`
  * `carry = a & b`

---

### Full Adder (Built from Half Adders)

Structure:

1. First half adder → adds `a` and `b`
2. Second half adder → adds intermediate sum with `cin`
3. Final carry → OR of both carries

---

## ⚙️ Tools Used

* **Verilator** → Converts SystemVerilog to C++
* **CMake** → Automates build process
* **C++** → Drives simulation & verification
* **GTKWave** → Visualizes signal activity

---

## 🔧 Requirements

Install the following:

* Verilator (≥ 4.x)
* CMake (≥ 3.15)
* GCC/Clang
* GTKWave (for waveform viewing)

---

### 🖥 Install on Linux

#### Ubuntu / Debian

```bash
sudo apt update
sudo apt install verilator cmake g++ gtkwave
```

---

## 🚀 Build & Run

### Option 1: Manual

```bash
mkdir build
cd build
cmake ..
make -j
./tb_full_adder
```

---

### Option 2: Using Script

create a run.sh inside full_adder_verif/

scrit:-

#!/usr/bin/env bash
set -e

rm -rf build
mkdir build
cd build

cmake ..
make -j

./tb_full_adder

Make it executable:-

chmod +x run.sh

```bash
./run.sh
```

---

## ✅ Expected Output

```text
a b cin | sum cout
-------------------
0 0 0 | 0 0  OK
0 0 1 | 1 0  OK
0 1 0 | 1 0  OK
0 1 1 | 0 1  OK
1 0 0 | 1 0  OK
1 0 1 | 0 1  OK
1 1 0 | 0 1  OK
1 1 1 | 1 1  OK

All tests passed!
```

---

## 📊 Waveform Viewing (GTKWave)

### ▶️ Generate Waveform

```bash
./tb_full_adder
```

This creates:

```text
wave.vcd
```

---

### 👀 Open in GTKWave

```bash
gtkwave wave.vcd
```

---

### 🔍 Signals to Inspect

Add the following signals:

* `a`, `b`, `cin`
* `sum`, `cout`

Optional internal signals:

* `s1`, `c1`, `c2`

---

### 📈 What You’ll Observe

* All 8 input combinations
* Correct propagation of sum and carry
* Clean combinational transitions

---

## 🧪 Verification Strategy

The testbench:

* Iterates through all **8 possible input combinations**
* Drives DUT inputs
* Calls `eval()` to simulate logic
* Computes expected result using C++
* Compares DUT output vs expected
* Reports pass/fail

---

## 🔄 Simulation Flow

```text
SystemVerilog RTL
        ↓
Verilator (via CMake)
        ↓
Generated C++ model (Vfull_adder)
        ↓
C++ Testbench drives inputs
        ↓
eval() computes outputs
        ↓
Results checked + waveform dumped
```

---

## 📘 Key Files Explained

### `CMakeLists.txt`

* Finds Verilator
* Compiles RTL into C++ model
* Builds testbench executable
* Enables waveform tracing

---

### `tb_full_adder.cpp`

* Instantiates DUT (`Vfull_adder`)
* Applies test vectors
* Dumps waveform (`wave.vcd`)
* Validates outputs

---

### `full_adder.sv`

* Top module (DUT)

---

### `half_adder.sv`

* Submodule used inside full adder

---

## ⚠️ Common Issues

* ❌ No waveform generated
  → Ensure `TRACE` is enabled in CMake

* ❌ GTKWave not opening
  → Install using package manager

* ❌ Build fails
  → Check Verilator installation

---

## 📈 Possible Improvements

* Add **clock-based simulation**
* Use **randomized testing**
* Add **assertions**
* Extend to **N-bit adder**
* Dump **FST waveform (smaller than VCD)**
* Integrate **CI (GitHub Actions)**

---

## 🧩 Why This Project Matters

This project demonstrates:

* How RTL becomes executable C++
* How hardware is verified using software techniques
* A minimal but real-world simulation flow

## 🙌 Acknowledgment

A simple, educational template for:

* RTL beginners
* Verification engineers
* Anyone learning Verilator + CMake workflow

---
