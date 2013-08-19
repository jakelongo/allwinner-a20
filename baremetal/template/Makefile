SOURCES=hello_world.c
CC=arm-linux-gnueabi-gcc
LD=arm-linux-gnueabi-ld.bfd
CFLAGS=-c -g -O0 -save-temps -fverbose-asm -fno-common -ffixed-r8 -msoft-float  -D__KERNEL__ -DCONFIG_SYS_TEXT_BASE=0x4A000000 -DCONFIG_SPL_TEXT_BASE=0x30 -I/home/seth/olinuxino/u-boot-sunxi/include -fno-builtin -ffreestanding -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabi/4.6.1/include -pipe  -DCONFIG_ARM -D__ARM__ -marm -mno-thumb-interwork -mabi=aapcs-linux -march=armv7-a  -Wall -Wstrict-prototypes -fno-stack-protector -Wno-format-nonliteral -Wno-format-security -fstack-usage -fno-toplevel-reorder
LDFLAGS=-g -Ttext 0x48000000
OBJECTS=$(SOURCES:.c=.o)
	EXECUTABLE=hello_world
	EXEBIN=$(EXECUTABLE).bin

all: clean $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
		$(LD) $(LDFLAGS) $(OBJECTS) libstubs.o -o $@
			arm-linux-gnueabi-objcopy -O binary $(EXECUTABLE) $(EXEBIN) 2>/dev/null

clean: 
		rm -f $(EXECUTABLE) $(OBJECTS) $(EXEBIN)

.c.o:
		$(CC) $(CFLAGS) $< -o $@
