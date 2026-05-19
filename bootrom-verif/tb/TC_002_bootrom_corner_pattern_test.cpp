#include "tb_common.h"

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

#ifdef VM_COVERAGE
    VerilatedCov::clear();
#endif

    system("mkdir -p ../waves");

    Vboot_rom* top = new Vboot_rom;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("../waves/TC_002_bootrom_corner_pattern_test.vcd");

    BootRomCov cov;

    uint32_t patterns[] = {
        0x000, 0x3FF, 0x155, 0x2AA, 0x0F0, 0x00F
    };

    uint32_t last = 0;

    for (int i = 0; i < 500; i++) {

        uint32_t addr;

        if (i < 120) {
            addr = patterns[i % 6];
        }
        else {
            addr = toggle_stim(i, last);
        }

        top->addr_i = addr;
        tick(top, tfp);
        cov.sample(addr);

        last = addr;
    }

    VerilatedCov::write("TC_002_bootrom_corner_pattern_test.dat");

    cov.report("coverage/TC_002_bootrom_corner_pattern_test/fcov.txt");

    tfp->close();
    delete tfp;
    delete top;

    return 0;
}
