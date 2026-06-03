## 📘 Understanding the CMake Configuration (Line-by-Line)

This section explains every line of the `CMakeLists.txt` used in this project.

---

### 📄 Full File

```cmake
cmake_minimum_required(VERSION 3.15)
project(full_adder_verif)

set(CMAKE_CXX_STANDARD 17)

find_package(verilator REQUIRED)

set(RTL_SOURCES
    ${CMAKE_SOURCE_DIR}/rtl/half_adder.sv
    ${CMAKE_SOURCE_DIR}/rtl/full_adder.sv
)

verilate(
    TOP_MODULE full_adder
    PREFIX Vfull_adder
    SOURCES ${RTL_SOURCES}
    TRACE
)

add_executable(tb_full_adder
    tb/tb_full_adder.cpp
)

target_link_libraries(tb_full_adder PRIVATE Vfull_adder)
```

---

## 🔍 Explanation

---

### `cmake_minimum_required(VERSION 3.15)`

* Ensures CMake version is **at least 3.15**
* Required because:

  * The `verilate()` function is provided by modern Verilator CMake integration
* Prevents compatibility issues on older systems

---

### `project(full_adder_verif)`

* Defines the project name
* Used internally by CMake for:

  * Build metadata
  * Naming conventions
  * Logging

---

### `set(CMAKE_CXX_STANDARD 17)`

* Forces the compiler to use **C++17**
* Required because:

  * Verilator-generated code and modern testbenches rely on newer C++ features

---

### `find_package(verilator REQUIRED)`

* Locates the Verilator installation on your system
* Imports:

  * Verilator executable
  * CMake helper functions (like `verilate()`)

**`REQUIRED` means:**

* If Verilator is not installed → build fails immediately

---

### `set(RTL_SOURCES ...)`

```cmake
set(RTL_SOURCES
    ${CMAKE_SOURCE_DIR}/rtl/half_adder.sv
    ${CMAKE_SOURCE_DIR}/rtl/full_adder.sv
)
```

* Defines a variable containing all RTL files
* `${CMAKE_SOURCE_DIR}` = root of the project

**Why this matters:**

* Keeps file paths clean and maintainable
* Easy to extend with more modules later

---

### `verilate(...)`

This is the most important part.

```cmake
verilate(
    TOP_MODULE full_adder
    PREFIX Vfull_adder
    SOURCES ${RTL_SOURCES}
    TRACE
)
```

#### What it does:

* Runs Verilator on your SystemVerilog files
* Generates a C++ simulation model

---

#### 🔑 Arguments explained:

---

##### `TOP_MODULE full_adder`

* Specifies the **top-level module** in RTL
* Verilator starts elaboration from here

---

##### `PREFIX Vfull_adder`

* Sets the generated C++ class name prefix

👉 Result:

```cpp
Vfull_adder *top;
```

Without this:

* Naming becomes inconsistent or auto-generated

---

##### `SOURCES ${RTL_SOURCES}`

* List of all RTL files needed for compilation
* Includes:

  * Top module
  * Submodules (half adder)

---

##### `TRACE`

* Enables waveform tracing support
* Required for:

  * VCD dump (`wave.vcd`)
  * GTKWave visualization

If removed:

* No waveform generation possible

---

### `add_executable(tb_full_adder ...)`

```cmake
add_executable(tb_full_adder
    tb/tb_full_adder.cpp
)
```

* Creates a C++ executable named `tb_full_adder`
* This is your **testbench binary**

---

### `target_link_libraries(tb_full_adder PRIVATE Vfull_adder)`

* Links the generated Verilator model to the testbench

#### What is `Vfull_adder`?

* A library automatically created by `verilate()`
* Contains:

  * Translated RTL (C++)
  * Simulation infrastructure

---

#### Why linking is required:

Without this:

* Testbench cannot access DUT
* Compilation will fail (missing symbols)

---

#### `PRIVATE` keyword:

* Means:

  * Only this target (`tb_full_adder`) uses the library
  * Dependencies are not propagated further

---

## 🧠 Big Picture Flow

```text
SystemVerilog (RTL)
        │
        ▼
Verilator (via verilate())
        │
        ▼
Generated C++ model (Vfull_adder)
        │
        ▼
Linked with testbench (tb_full_adder.cpp)
        │
        ▼
Executable simulation binary
```

---

## ⚠️ Common Mistakes

* ❌ Forgetting `TRACE` → no waveform output
* ❌ Missing RTL files in `SOURCES` → build errors
* ❌ Wrong `TOP_MODULE` → undefined behavior
* ❌ Not linking `Vfull_adder` → linker errors

---

## 📈 Tips for Scaling

* Add more RTL files to `RTL_SOURCES`
* Create multiple testbenches:

  ```cmake
  add_executable(tb_random tb/tb_random.cpp)
  ```
* Use separate directories for:

  * `rtl/`
  * `tb/`
  * `sim/`

---

## 🧩 Summary

This CMake setup:

* Compiles SystemVerilog using Verilator
* Generates a C++ model (`Vfull_adder`)
* Builds a C++ testbench
* Links everything into a runnable simulation
* Enables waveform tracing for debugging

---
