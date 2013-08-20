## Makefile for a allwinner project
##
## Requires some ARM compiler which prefix is set below
##
##

# Output files
MAIN 		:=hello_world
MAINC 		:=$(MAIN).c
BINOUT		:=$(MAIN).bin

# ARM Toolchain
TOOLCHAIN 	:= arm-none-eabi-

# folder structure
BINARY		:= main
SOURCE      := src/
INCLUDE     := inc/
LIBRARY		:= lib/
BUILD       := bld/

CC			:= $(TOOLCHAIN)gcc
LD 			:= $(TOOLCHAIN)ld.bfd
OBJCPY 		:= $(TOOLCHAIN)objcopy

CFLAGS		:= -c -g -fverbose-asm -fno-common -msoft-float -fno-builtin
CFLAGS		+= -ffixed-r8 -D__KERNEL__ -DCONFIG_SYS_TEXT_BASE=0x4A000000
CFLAGS		+= -DCONFIG_SPL_TEXT_BASE=0x20 -DCONFIG_SPL_PAD_TO=24576 -nostdinc
CFLAGS		+= -pipe  -DCONFIG_ARM -D__ARM__ -marm -mno-thumb-interwork  -ffreestanding
CFLAGS		+= -mabi=aapcs-linux -march=armv7-a  -Wall -Wstrict-prototypes
CFLAGS		+= -fno-stack-protector -Wno-format-nonliteral -Wno-format-security
CFLAGS 		+= -fstack-usage -fno-toplevel-reorder -ffunction-sections -fdata-sections
CFLAGS		+= $(call cc-option,-fno-toplevel-reorder)

LIB	 		:= -I/Users/jake/Documents/Projects/u-boot-sunxi/include
LIB 		+= -isystem $(shell $(CC) -print-file-name=include)

LDFLAGS		:= -g -Ttext 0x50000000
LDFLAGS 	+= -L$(shell dirname `$(CC) -print-libgcc-file-name`) -lgcc

OBJS 		:= $(patsubst $(SOURCE)%.c,$(BUILD)%.o,$(wildcard $(SOURCE)*.c))

all: $(MAIN)

$(MAIN): $(OBJS)
		$(LD) -r -o $(LIBRARY)libstubs.o $(BUILD)stubs.o
		$(LD) $(LDFLAGS) -o $(MAIN) -e $(MAIN) $(LNK) $(filter-out $(BUILD)stubs.o, $(OBJS)) $(LIBRARY)libstubs.o

		$(OBJCPY) -O srec $(MAIN) $(MAIN).srec 2>/dev/null
		$(OBJCPY) -O binary $(MAIN) $(MAIN).bin 2>/dev/null

$(BUILD)%.o: $(SOURCE)%.c
		$(CC) $(CFLAGS) $(LIB) -o $@ $< -c

clean: 
		$(Q)rm -f $(BUILD)*
		$(Q)rm -f $(MAIN)*

