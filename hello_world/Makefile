CC=arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m4 -mthumb -O0 -g \
         -ffreestanding -nostdlib -nostartfiles
LDFLAGS=-T linker.ld -nostartfiles

all: firmware.elf firmware.bin

firmware.elf: startup.c main.c
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

firmware.bin: firmware.elf
	arm-none-eabi-objcopy -O binary $< $@

clean:
	rm -f firmware.elf firmware.bin

