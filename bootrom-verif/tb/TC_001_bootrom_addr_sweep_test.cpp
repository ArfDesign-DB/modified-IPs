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
    tfp->open("../waves/TC_001_bootrom_addr_sweep_test.vcd");

    BootRomCov cov;

    for (uint32_t addr = 0; addr < 1024; addr++) {

        top->addr_i = addr;
        tick(top, tfp);
        cov.sample(addr);
    }

    VerilatedCov::write("TC_001_bootrom_addr_sweep_test.dat");

    cov.report("coverage/TC_001_bootrom_addr_sweep_test/fcov.txt");

    tfp->close();
    delete tfp;
    delete top;

    return 0;
}
