.section .text.start, "ax"
.global _start

_start:

    li x1, 0x11111111
    li x2, 0x22222222
    li x3, 0x33333333
    li x4, 0x44444444

    add x5, x1, x2
    sub x6, x5, x3
    xor x7, x6, x4
    or  x8, x7, x1
    and x9, x8, x2

    slli x10, x9, 3
    srli x11, x10, 1

    beq x1, x1, label1
    nop

label1:

    bne x1, x2, label2
    nop

label2:

    jal x0, done

done:

    nop
    nop
    nop

loop:
    j loop
