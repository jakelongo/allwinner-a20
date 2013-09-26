#!/usr/bin/python

# Only un-comment registers a time...graceful program right?
# GPIO

# ports  = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'S']

# base   = 0x01C20800
# offset = 0x24

# Only un-comment one set sub registers at a time...graceful program right?

# Pn_CFG
# subreg = ['CFG0', 'CFG1', 'CFG2', 'CFG3']
# suboff = [0x00, 0x04, 0x08, 0x0C]

# Pn_DAT
# subreg = ['DAT']
# suboff = [0x10]

# Pn_DRV
# subreg = ['DRV0', 'DRV1']
# suboff = [0x14, 0x18]

# Pn_PUL
# subreg = ['PUL0', 'PUL1']
# suboff = [0x1C, 0x20]

# for j, port in enumerate(ports):
# 	for i, subport in enumerate(subreg):
# 		print "#define P" + port + "_" + subport + " (*(volatile unsigned long *)" + '0x%08X' % ((j*offset) + suboff[i] + base) + ")"
# 	print ''

# END OF GPIO

# UART

# label = 'UART'
# uarts = xrange(8)

# absoluteBase = 0x01C28000
# offsetBase   = 0x400

# subreg = ['RBR', 'THR', 'DLL', 'DLH', 'IER', 'IIR', 'FCR', 'LCR', 'MCR', 'LSR', 'MSR', 'SCH', 'USR', 'TFL', 'RFL', 'HALT']
# suboff = [0x000, 0x000, 0x000, 0x004, 0x004, 0x008, 0x008, 0x00C, 0x010, 0x014, 0x018, 0x01C, 0x07C, 0x080, 0x084, 0x0A4 ]

# for j, port in enumerate(uarts):
# 	base = ((j*offsetBase) + absoluteBase)
# 	print "// UART" + str(j) + " Registers"
# 	print "#define " + label + str(uarts[j]) + "_BASE " + '0x%08X' % ((j*offsetBase) + absoluteBase)
# 	for i, subregs in enumerate(subreg):
# 		print "#define UART" + str(j) + "_" + subregs + " (*(volatile unsigned long *)" + '0x%08X' % (suboff[i] + base) + ")"
# 	print ''

# END OF UART

# SECURITY REGISTERS

# esier to just write these ones out
# base = 0x01C15000

# subregs = ['CTL', 'KEY0', 'KEY1', 'KEY2', 'KEY3', 'KEY4', 'KEY5', 'KEY6', 'KEY7',
# 			'IV0', 'IV1', 'IV2', 'IV3', 'CNT0', 'CNT1', 'CNT2', 'CNT3', 'FCSR',
# 			'ICSR', 'MD0',  'MD1', 'MD2', 'MD3', 'MD4', 'CTS_LEN', 'RXFIFO',
# 			'TXFIFO']

# suboffsets = [0x00, 0x04, 0x08, 0x0C, 0x10, 0x14, 0x18, 0x1C, 0x20, 0x24, 0x28, 0x2C,
# 			0x30, 0x34, 0x38, 0x3C, 0x40, 0x44, 0x48, 0x4C, 0x50, 0x54, 0x58, 0x5C,
# 			0x60, 0x200, 0x204]


# for i, subreg in enumerate(subregs):
# 	print "#define SS_" + subreg + " (*(volatile unsigned long *)" + '0x%08X' % (base + suboffsets[i]) + ")"
# print ''

# END OF SECURITY REGISTERS

# CPU CONFIG REGISTER

# base = 0x01C25C00

# subregs = ['CPU0_RST_CTRL', 'CPU0_CTRL_REG', 'CPU0_STATUS_REG', 'CPU1_RST_CTRL', 'CPU1_CTRL_REG', 'CPU1_STATUS_REG',
# 			'GENER_CTRL_REG', 'EVENT_IN', 'PRIVATE_REG', 'IDLE_CNT0_LOW_REG', 'IDLE_CNT0_HIGH_REG', 'IDLE_CNT0_CTRL_REG',
# 			'IDLE_CNT1_LOW_REG', 'IDLE_CNT1_HIGH_REG', 'IDLE_CNT1_CTRL_REG', 'OSC24M_CNT64_CTRL_REG', 'OSC24M_CNT64_LOW_REG',
# 			'OSC24M_CNT64_HIGH_REG', 'LOSC_CNT64_CTRL_REG', 'LOSC_CNT64_LOW_REG', 'LOSC_CNT64_HIGH_REG']

# suboffs = [0x0040, 0x0044, 0x0048, 0x0080, 0x0084, 0x0088, 0x0184, 0x0190, 0x01A4, 0x0200, 0x0204, 0x0208, 0x0210, 0x0214,
# 			0x0218, 0x0280, 0x0284, 0x0288, 0x0290, 0x0294, 0x0298]

# for i in xrange(len(subregs)):
# 		print "#define " + subregs[i] + " (*(volatile unsigned long *)" + '0x%08X' % (base + suboffs[i]) + ")"

# END OF CONFIG REG

# CCU REGISTER

# printing out each offset as well. This is purely for bug tracking purposes if one arises!
# base = 0x01C20000

# subregs = ['PLL1_CFG_REG', 'PLL1_TUN_REG', 'PLL2_CFG_REG', 'PLL2_TUN_REG', 'PLL3_CFG_REG', 'PLL4_CFG_REG', 'PLL5_CFG_REG',
# 			'PLL5_TUN_REG', 'PLL6_CFG_REG', 'PLL6_TUN_REG', 'PLL7_CFG_REG', 'PLL1_TUN2_REG', 'PLL5_TUN2_REG', 'PLL8_CFG_REG',
# 			'OSC24M_CFG_REG', 'CPU_AHB_APB0_CFG_REG', 'APB1_CLK_DIV_REG', 'AHB_GATING_REG0', 'AHB_GATING_REG1', 'APB0_GATING_REG',
# 			'APB1_GATING_REG', 'NAND_SCLK_CFG_REG', 'MS_SCLK_CFG_REG', 'SD0_CLK_REG', 'SD1_CLK_REG', 'SD2_CLK_REG', 'SD3_CLK_REG',
# 			'TS_CLK_REG', 'SS_CLK_REG', 'SPI0_CLK_REG', 'SPI1_CLK_REG', 'SPI2_CLK_REG', 'IR0_CLK_REG', 'IR1_CLK_REG', 'IIS0_CLK_REG',
# 			'AC97_CLK_REG', 'SPDIF_CLK_REG', 'KEYPAD_CLK_REG', 'SATA_CLK_REG', 'USB_CLK_REG', 'SPI3_CLK_REG', 'IIS1_CLK_REG',
# 			'IIS2_CLK_REG', 'DRAM_CLK_REG', 'BE0_SCLK_CFG_REG', 'BE1_SCLK_CFG_REG', 'FE0_CLK_REG', 'FE1_CLK_REG', 'MP_CLK_REG',
# 			'LCD0_CH0_CLK_REG', 'LCD1_CH0_CLK_REG', 'CSI_SCLK_REG', 'TVD_CLK_REG', 'LCD0_CH1_CLK_REG', 'LCD1_CH1_CLK_REG', 
# 			'CSI0_CLK_REG', 'CSI1_CLK_REG', 'VE_CLK_REG', 'AUDIO_CODEC_CLK_REG', 'AVS_CLK_REG', 'ACE_CLK_REG', 'LVDS_CLK_REG',
# 			'HDMI_CLK_REG', 'MALI400_CLK_REG', 'MBUS_SCLK_CFG_REG', 'GMAC_CLK_REG', 'HDMI1_RST_REG', 'HDMI1_CTRL_REG', 
# 			'HDMI1_SLOW_CLK_REG', 'HDMI1_REPEAT_CLK_REG', 'CLK_OUTA_REG', 'CLK_OUTB_REG']

# suboffs = [0x0000, 0x0004, 0x0008, 0x000C, 0x0010, 0x0018, 0x0020, 0x0024, 0x0028, 0x002C, 0x0030, 0x0038, 0x003C, 0x0040, 0x0050,
# 			0x0054, 0x0058, 0x0060, 0x0064, 0x0068, 0x006C, 0x0080, 0x0084, 0x0088, 0x008C, 0x0090, 0x0094, 0x0098, 0x009C, 0x00A0,
# 			0x00A4, 0x00A8, 0x00B0, 0x00B4, 0x00B8, 0x00BC, 0x00C0, 0x00C4, 0x00C8, 0x00CC, 0x00D4, 0x00D8, 0x00DC, 0x0100, 0x0104,
# 			0x0108, 0x010C, 0x0110, 0x0114, 0x0118, 0x011C, 0x0120, 0x0128, 0x012C, 0x0130, 0x0134, 0x0138, 0x013C, 0x0140, 0x0144,
# 			0x0148, 0x014C, 0x0150, 0x0154, 0x015C, 0x0164, 0x0170, 0x0174, 0x0178, 0x017C, 0x01F0, 0x01F4]

# for i in xrange(len(subregs)):
# 		print "#define " + subregs[i] + (" (*(volatile unsigned long *)" + '0x%08X' % (base + suboffs[i]) + ")").rjust((70 - (len(subregs[i]))), ' ')
# 		print "#define " + subregs[i] + "_OFFSET" + ('0x%04X' % (suboffs[i])).rjust((30 - len(subregs[i])), ' ') + '\n'

# END OF CCU REGISTERS

# 
