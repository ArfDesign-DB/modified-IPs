RISCV_PREFIX ?= riscv32-unknown-elf

CC      = $(RISCV_PREFIX)-gcc
OBJCOPY = $(RISCV_PREFIX)-objcopy
OBJDUMP = $(RISCV_PREFIX)-objdump

CFLAGS  = -march=rv32imc -mabi=ilp32 -nostdlib -nostartfiles -T linker.ld

TARGET = boot

all: $(TARGET).mem $(TARGET).dump

$(TARGET).elf: boot.S linker.ld
	$(CC) $(CFLAGS) -o $@ boot.S

$(TARGET).mem: $(TARGET).elf
	$(OBJCOPY) -O verilog $< $@

$(TARGET).dump: $(TARGET).elf
	$(OBJDUMP) -d $< > $@

check:
	@echo "==== boot.mem preview ===="
	@head -n 20 $(TARGET).mem

clean:
	rm -f *.elf *.mem *.dump
