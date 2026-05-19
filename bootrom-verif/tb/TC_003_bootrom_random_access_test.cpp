#include "tb_common.h"

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

#ifdef VM_COVERAGE
    VerilatedCov::clear();
#endif

    srand(12345);

    system("mkdir -p ../waves");

    Vboot_rom* top = new Vboot_rom;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("../waves/TC_003_bootrom_random_access_test.vcd");

    BootRomCov cov;

    run_toggle_loop(top, tfp, cov, 20000);

    VerilatedCov::write("TC_003_bootrom_random_access_test.dat");

    cov.report("coverage/TC_003_bootrom_random_access_test/fcov.txt");

    tfp->close();
    delete tfp;
    delete top;

    return 0;
}
