#include <iostream>
#include <iomanip>
#include <cstdint>

//
// GPIO OUTPUT CHECK
//
void check_gpio(
    uint32_t dut_value,
    uint32_t ref_value)
{
    std::cout
        << "[CHECK] DUT=0x"
        << std::hex
        << dut_value
        << " REF=0x"
        << ref_value;

    if (dut_value == ref_value)
        std::cout << " [PASS]";
    else
        std::cout << " [FAIL]";

    std::cout << std::endl;
}

//
// GENERIC DATA CHECK
//

void check_data(
    const char *msg,
    uint32_t dut_value,
    uint32_t ref_value)
{
    std::cout
        << "[CHECK] "
        << msg
        << " DUT=0x"
        << std::hex
        << dut_value
        << " REF=0x"
        << ref_value;

    if (dut_value == ref_value)
        std::cout << " [PASS]";
    else
        std::cout << " [FAIL]";

    std::cout << std::endl;
}
