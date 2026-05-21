#include "tb_uart.cpp"

int main(int argc, char **argv) {
    UartTB tb;

    tb.reset();

    tb.test_basic_rx();
    tb.test_basic_tx();
    tb.test_random_rx();

    tb.report();

    return 0;
}
