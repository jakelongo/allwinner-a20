// A20 header file

#ifndef __A20_H__
#define __A20_H__



// GPIO REGISTER ADDRESSES

#define __PA__ 0
#define __PB__ 1
#define __PC__ 2
#define __PD__ 3
#define __PE__ 4
#define __PF__ 5
#define __PG__ 6
#define __PH__ 7
#define __PI__ 8
#define __PS__ 9

#define PIO_BASE 0x01C20800

// Port n Configure Register (0,1,2,3)

#define PA_CFG0 (*(volatile unsigned long *)0x01C20800)
#define PA_CFG1 (*(volatile unsigned long *)0x01C20804)
#define PA_CFG2 (*(volatile unsigned long *)0x01C20808)
#define PA_CFG3 (*(volatile unsigned long *)0x01C2080C)

#define PB_CFG0 (*(volatile unsigned long *)0x01C20824)
#define PB_CFG1 (*(volatile unsigned long *)0x01C20828)
#define PB_CFG2 (*(volatile unsigned long *)0x01C2082C)
#define PB_CFG3 (*(volatile unsigned long *)0x01C20830)

#define PC_CFG0 (*(volatile unsigned long *)0x01C20848)
#define PC_CFG1 (*(volatile unsigned long *)0x01C2084C)
#define PC_CFG2 (*(volatile unsigned long *)0x01C20850)
#define PC_CFG3 (*(volatile unsigned long *)0x01C20854)

#define PD_CFG0 (*(volatile unsigned long *)0x01C2086C)
#define PD_CFG1 (*(volatile unsigned long *)0x01C20870)
#define PD_CFG2 (*(volatile unsigned long *)0x01C20874)
#define PD_CFG3 (*(volatile unsigned long *)0x01C20878)

#define PE_CFG0 (*(volatile unsigned long *)0x01C20890)
#define PE_CFG1 (*(volatile unsigned long *)0x01C20894)
#define PE_CFG2 (*(volatile unsigned long *)0x01C20898)
#define PE_CFG3 (*(volatile unsigned long *)0x01C2089C)

#define PF_CFG0 (*(volatile unsigned long *)0x01C208B4)
#define PF_CFG1 (*(volatile unsigned long *)0x01C208B8)
#define PF_CFG2 (*(volatile unsigned long *)0x01C208BC)
#define PF_CFG3 (*(volatile unsigned long *)0x01C208C0)

#define PG_CFG0 (*(volatile unsigned long *)0x01C208D8)
#define PG_CFG1 (*(volatile unsigned long *)0x01C208DC)
#define PG_CFG2 (*(volatile unsigned long *)0x01C208E0)
#define PG_CFG3 (*(volatile unsigned long *)0x01C208E4)

#define PH_CFG0 (*(volatile unsigned long *)0x01C208FC)
#define PH_CFG1 (*(volatile unsigned long *)0x01C20900)
#define PH_CFG2 (*(volatile unsigned long *)0x01C20904)
#define PH_CFG3 (*(volatile unsigned long *)0x01C20908)

#define PI_CFG0 (*(volatile unsigned long *)0x01C20920)
#define PI_CFG1 (*(volatile unsigned long *)0x01C20924)
#define PI_CFG2 (*(volatile unsigned long *)0x01C20928)
#define PI_CFG3 (*(volatile unsigned long *)0x01C2092C)

#define PS_CFG0 (*(volatile unsigned long *)0x01C20944)
#define PS_CFG1 (*(volatile unsigned long *)0x01C20948)
#define PS_CFG2 (*(volatile unsigned long *)0x01C2094C)
#define PS_CFG3 (*(volatile unsigned long *)0x01C20950)


// Port n Data Register

#define PA_DAT (*(volatile unsigned long *)0x01C20810)
#define PB_DAT (*(volatile unsigned long *)0x01C20834)
#define PC_DAT (*(volatile unsigned long *)0x01C20858)
#define PD_DAT (*(volatile unsigned long *)0x01C2087C)
#define PE_DAT (*(volatile unsigned long *)0x01C208A0)
#define PF_DAT (*(volatile unsigned long *)0x01C208C4)
#define PG_DAT (*(volatile unsigned long *)0x01C208E8)
#define PH_DAT (*(volatile unsigned long *)0x01C2090C)
#define PI_DAT (*(volatile unsigned long *)0x01C20930)
#define PS_DAT (*(volatile unsigned long *)0x01C20954)


// Port n Multi-Driving Register (0,1)

#define PA_DRV0 (*(volatile unsigned long *)0x01C20814)
#define PA_DRV1 (*(volatile unsigned long *)0x01C20818)

#define PB_DRV0 (*(volatile unsigned long *)0x01C20838)
#define PB_DRV1 (*(volatile unsigned long *)0x01C2083C)

#define PC_DRV0 (*(volatile unsigned long *)0x01C2085C)
#define PC_DRV1 (*(volatile unsigned long *)0x01C20860)

#define PD_DRV0 (*(volatile unsigned long *)0x01C20880)
#define PD_DRV1 (*(volatile unsigned long *)0x01C20884)

#define PE_DRV0 (*(volatile unsigned long *)0x01C208A4)
#define PE_DRV1 (*(volatile unsigned long *)0x01C208A8)

#define PF_DRV0 (*(volatile unsigned long *)0x01C208C8)
#define PF_DRV1 (*(volatile unsigned long *)0x01C208CC)

#define PG_DRV0 (*(volatile unsigned long *)0x01C208EC)
#define PG_DRV1 (*(volatile unsigned long *)0x01C208F0)

#define PH_DRV0 (*(volatile unsigned long *)0x01C20910)
#define PH_DRV1 (*(volatile unsigned long *)0x01C20914)

#define PI_DRV0 (*(volatile unsigned long *)0x01C20934)
#define PI_DRV1 (*(volatile unsigned long *)0x01C20938)

#define PS_DRV0 (*(volatile unsigned long *)0x01C20958)
#define PS_DRV1 (*(volatile unsigned long *)0x01C2095C)


// Port n Pull Register (0,1)

#define PA_PUL0 (*(volatile unsigned long *)0x01C2081C)
#define PA_PUL1 (*(volatile unsigned long *)0x01C20820)

#define PB_PUL0 (*(volatile unsigned long *)0x01C20840)
#define PB_PUL1 (*(volatile unsigned long *)0x01C20844)

#define PC_PUL0 (*(volatile unsigned long *)0x01C20864)
#define PC_PUL1 (*(volatile unsigned long *)0x01C20868)

#define PD_PUL0 (*(volatile unsigned long *)0x01C20888)
#define PD_PUL1 (*(volatile unsigned long *)0x01C2088C)

#define PE_PUL0 (*(volatile unsigned long *)0x01C208AC)
#define PE_PUL1 (*(volatile unsigned long *)0x01C208B0)

#define PF_PUL0 (*(volatile unsigned long *)0x01C208D0)
#define PF_PUL1 (*(volatile unsigned long *)0x01C208D4)

#define PG_PUL0 (*(volatile unsigned long *)0x01C208F4)
#define PG_PUL1 (*(volatile unsigned long *)0x01C208F8)

#define PH_PUL0 (*(volatile unsigned long *)0x01C20918)
#define PH_PUL1 (*(volatile unsigned long *)0x01C2091C)

#define PI_PUL0 (*(volatile unsigned long *)0x01C2093C)
#define PI_PUL1 (*(volatile unsigned long *)0x01C20940)

#define PS_PUL0 (*(volatile unsigned long *)0x01C20960)
#define PS_PUL1 (*(volatile unsigned long *)0x01C20964)

// PIO Interrrupt Configure Register (0,1,2,3)

#define PIO_INT_CFG0 (*(volatile unsigned long *)0x01C20A00)
#define PIO_INT_CFG1 (*(volatile unsigned long *)0x01C20A04)
#define PIO_INT_CFG2 (*(volatile unsigned long *)0x01C20A08)
#define PIO_INT_CFG3 (*(volatile unsigned long *)0x01C20A0C)

// PIO Interrupt Control, Status and Debounce (wtf?) Register

#define PIO_INT_CTL (*(volatile unsigned long *)0x01C20A10)
#define PIO_INT_STA (*(volatile unsigned long *)0x01C20A14)
#define PIO_INT_DEB (*(volatile unsigned long *)0x01C20A18)

// END OF GPIO REGISTERS


// UART REGISTER ADDRESSES (PG 644 in manual)

// UART0 Registers
#define UART0_BASE 0x01C28000
#define UART0_RBR (*(volatile unsigned long *)0x01C28000)
#define UART0_THR (*(volatile unsigned long *)0x01C28000)
#define UART0_DLL (*(volatile unsigned long *)0x01C28000)
#define UART0_DLH (*(volatile unsigned long *)0x01C28004)
#define UART0_IER (*(volatile unsigned long *)0x01C28004)
#define UART0_IIR (*(volatile unsigned long *)0x01C28008)
#define UART0_FCR (*(volatile unsigned long *)0x01C28008)
#define UART0_LCR (*(volatile unsigned long *)0x01C2800C)
#define UART0_MCR (*(volatile unsigned long *)0x01C28010)
#define UART0_LSR (*(volatile unsigned long *)0x01C28014)
#define UART0_MSR (*(volatile unsigned long *)0x01C28018)
#define UART0_SCH (*(volatile unsigned long *)0x01C2801C)
#define UART0_USR (*(volatile unsigned long *)0x01C2807C)
#define UART0_TFL (*(volatile unsigned long *)0x01C28080)
#define UART0_RFL (*(volatile unsigned long *)0x01C28084)
#define UART0_HALT (*(volatile unsigned long *)0x01C280A4)

// UART1 Registers
#define UART1_BASE 0x01C28400
#define UART1_RBR (*(volatile unsigned long *)0x01C28400)
#define UART1_THR (*(volatile unsigned long *)0x01C28400)
#define UART1_DLL (*(volatile unsigned long *)0x01C28400)
#define UART1_DLH (*(volatile unsigned long *)0x01C28404)
#define UART1_IER (*(volatile unsigned long *)0x01C28404)
#define UART1_IIR (*(volatile unsigned long *)0x01C28408)
#define UART1_FCR (*(volatile unsigned long *)0x01C28408)
#define UART1_LCR (*(volatile unsigned long *)0x01C2840C)
#define UART1_MCR (*(volatile unsigned long *)0x01C28410)
#define UART1_LSR (*(volatile unsigned long *)0x01C28414)
#define UART1_MSR (*(volatile unsigned long *)0x01C28418)
#define UART1_SCH (*(volatile unsigned long *)0x01C2841C)
#define UART1_USR (*(volatile unsigned long *)0x01C2847C)
#define UART1_TFL (*(volatile unsigned long *)0x01C28480)
#define UART1_RFL (*(volatile unsigned long *)0x01C28484)
#define UART1_HALT (*(volatile unsigned long *)0x01C284A4)

// UART2 Registers
#define UART2_BASE 0x01C28800
#define UART2_RBR (*(volatile unsigned long *)0x01C28800)
#define UART2_THR (*(volatile unsigned long *)0x01C28800)
#define UART2_DLL (*(volatile unsigned long *)0x01C28800)
#define UART2_DLH (*(volatile unsigned long *)0x01C28804)
#define UART2_IER (*(volatile unsigned long *)0x01C28804)
#define UART2_IIR (*(volatile unsigned long *)0x01C28808)
#define UART2_FCR (*(volatile unsigned long *)0x01C28808)
#define UART2_LCR (*(volatile unsigned long *)0x01C2880C)
#define UART2_MCR (*(volatile unsigned long *)0x01C28810)
#define UART2_LSR (*(volatile unsigned long *)0x01C28814)
#define UART2_MSR (*(volatile unsigned long *)0x01C28818)
#define UART2_SCH (*(volatile unsigned long *)0x01C2881C)
#define UART2_USR (*(volatile unsigned long *)0x01C2887C)
#define UART2_TFL (*(volatile unsigned long *)0x01C28880)
#define UART2_RFL (*(volatile unsigned long *)0x01C28884)
#define UART2_HALT (*(volatile unsigned long *)0x01C288A4)

// UART3 Registers
#define UART3_BASE 0x01C28C00
#define UART3_RBR (*(volatile unsigned long *)0x01C28C00)
#define UART3_THR (*(volatile unsigned long *)0x01C28C00)
#define UART3_DLL (*(volatile unsigned long *)0x01C28C00)
#define UART3_DLH (*(volatile unsigned long *)0x01C28C04)
#define UART3_IER (*(volatile unsigned long *)0x01C28C04)
#define UART3_IIR (*(volatile unsigned long *)0x01C28C08)
#define UART3_FCR (*(volatile unsigned long *)0x01C28C08)
#define UART3_LCR (*(volatile unsigned long *)0x01C28C0C)
#define UART3_MCR (*(volatile unsigned long *)0x01C28C10)
#define UART3_LSR (*(volatile unsigned long *)0x01C28C14)
#define UART3_MSR (*(volatile unsigned long *)0x01C28C18)
#define UART3_SCH (*(volatile unsigned long *)0x01C28C1C)
#define UART3_USR (*(volatile unsigned long *)0x01C28C7C)
#define UART3_TFL (*(volatile unsigned long *)0x01C28C80)
#define UART3_RFL (*(volatile unsigned long *)0x01C28C84)
#define UART3_HALT (*(volatile unsigned long *)0x01C28CA4)

// UART4 Registers
#define UART4_BASE 0x01C29000
#define UART4_RBR (*(volatile unsigned long *)0x01C29000)
#define UART4_THR (*(volatile unsigned long *)0x01C29000)
#define UART4_DLL (*(volatile unsigned long *)0x01C29000)
#define UART4_DLH (*(volatile unsigned long *)0x01C29004)
#define UART4_IER (*(volatile unsigned long *)0x01C29004)
#define UART4_IIR (*(volatile unsigned long *)0x01C29008)
#define UART4_FCR (*(volatile unsigned long *)0x01C29008)
#define UART4_LCR (*(volatile unsigned long *)0x01C2900C)
#define UART4_MCR (*(volatile unsigned long *)0x01C29010)
#define UART4_LSR (*(volatile unsigned long *)0x01C29014)
#define UART4_MSR (*(volatile unsigned long *)0x01C29018)
#define UART4_SCH (*(volatile unsigned long *)0x01C2901C)
#define UART4_USR (*(volatile unsigned long *)0x01C2907C)
#define UART4_TFL (*(volatile unsigned long *)0x01C29080)
#define UART4_RFL (*(volatile unsigned long *)0x01C29084)
#define UART4_HALT (*(volatile unsigned long *)0x01C290A4)

// UART5 Registers
#define UART5_BASE 0x01C29400
#define UART5_RBR (*(volatile unsigned long *)0x01C29400)
#define UART5_THR (*(volatile unsigned long *)0x01C29400)
#define UART5_DLL (*(volatile unsigned long *)0x01C29400)
#define UART5_DLH (*(volatile unsigned long *)0x01C29404)
#define UART5_IER (*(volatile unsigned long *)0x01C29404)
#define UART5_IIR (*(volatile unsigned long *)0x01C29408)
#define UART5_FCR (*(volatile unsigned long *)0x01C29408)
#define UART5_LCR (*(volatile unsigned long *)0x01C2940C)
#define UART5_MCR (*(volatile unsigned long *)0x01C29410)
#define UART5_LSR (*(volatile unsigned long *)0x01C29414)
#define UART5_MSR (*(volatile unsigned long *)0x01C29418)
#define UART5_SCH (*(volatile unsigned long *)0x01C2941C)
#define UART5_USR (*(volatile unsigned long *)0x01C2947C)
#define UART5_TFL (*(volatile unsigned long *)0x01C29480)
#define UART5_RFL (*(volatile unsigned long *)0x01C29484)
#define UART5_HALT (*(volatile unsigned long *)0x01C294A4)

// UART6 Registers
#define UART6_BASE 0x01C29800
#define UART6_RBR (*(volatile unsigned long *)0x01C29800)
#define UART6_THR (*(volatile unsigned long *)0x01C29800)
#define UART6_DLL (*(volatile unsigned long *)0x01C29800)
#define UART6_DLH (*(volatile unsigned long *)0x01C29804)
#define UART6_IER (*(volatile unsigned long *)0x01C29804)
#define UART6_IIR (*(volatile unsigned long *)0x01C29808)
#define UART6_FCR (*(volatile unsigned long *)0x01C29808)
#define UART6_LCR (*(volatile unsigned long *)0x01C2980C)
#define UART6_MCR (*(volatile unsigned long *)0x01C29810)
#define UART6_LSR (*(volatile unsigned long *)0x01C29814)
#define UART6_MSR (*(volatile unsigned long *)0x01C29818)
#define UART6_SCH (*(volatile unsigned long *)0x01C2981C)
#define UART6_USR (*(volatile unsigned long *)0x01C2987C)
#define UART6_TFL (*(volatile unsigned long *)0x01C29880)
#define UART6_RFL (*(volatile unsigned long *)0x01C29884)
#define UART6_HALT (*(volatile unsigned long *)0x01C298A4)

// UART7 Registers
#define UART7_BASE 0x01C29C00
#define UART7_RBR (*(volatile unsigned long *)0x01C29C00)
#define UART7_THR (*(volatile unsigned long *)0x01C29C00)
#define UART7_DLL (*(volatile unsigned long *)0x01C29C00)
#define UART7_DLH (*(volatile unsigned long *)0x01C29C04)
#define UART7_IER (*(volatile unsigned long *)0x01C29C04)
#define UART7_IIR (*(volatile unsigned long *)0x01C29C08)
#define UART7_FCR (*(volatile unsigned long *)0x01C29C08)
#define UART7_LCR (*(volatile unsigned long *)0x01C29C0C)
#define UART7_MCR (*(volatile unsigned long *)0x01C29C10)
#define UART7_LSR (*(volatile unsigned long *)0x01C29C14)
#define UART7_MSR (*(volatile unsigned long *)0x01C29C18)
#define UART7_SCH (*(volatile unsigned long *)0x01C29C1C)
#define UART7_USR (*(volatile unsigned long *)0x01C29C7C)
#define UART7_TFL (*(volatile unsigned long *)0x01C29C80)
#define UART7_RFL (*(volatile unsigned long *)0x01C29C84)
#define UART7_HALT (*(volatile unsigned long *)0x01C29CA4)

// END OF UART REGISTERS

// SECURITY REGISTER ADDRESSES

#define SS_BASE 0x01C15000

#define SS_CTL (*(volatile unsigned long *)0x01C15000)

#define SS_KEY0 (*(volatile unsigned long *)0x01C15004)
#define SS_KEY1 (*(volatile unsigned long *)0x01C15008)
#define SS_KEY2 (*(volatile unsigned long *)0x01C1500C)
#define SS_KEY3 (*(volatile unsigned long *)0x01C15010)
#define SS_KEY4 (*(volatile unsigned long *)0x01C15014)
#define SS_KEY5 (*(volatile unsigned long *)0x01C15018)
#define SS_KEY6 (*(volatile unsigned long *)0x01C1501C)
#define SS_KEY7 (*(volatile unsigned long *)0x01C15020)

#define SS_IV0 (*(volatile unsigned long *)0x01C15024)
#define SS_IV1 (*(volatile unsigned long *)0x01C15028)
#define SS_IV2 (*(volatile unsigned long *)0x01C1502C)
#define SS_IV3 (*(volatile unsigned long *)0x01C15030)

#define SS_CNT0 (*(volatile unsigned long *)0x01C15034)
#define SS_CNT1 (*(volatile unsigned long *)0x01C15038)
#define SS_CNT2 (*(volatile unsigned long *)0x01C1503C)
#define SS_CNT3 (*(volatile unsigned long *)0x01C15040)

#define SS_FCSR (*(volatile unsigned long *)0x01C15044)
#define SS_ICSR (*(volatile unsigned long *)0x01C15048)

#define SS_MD0 (*(volatile unsigned long *)0x01C1504C)
#define SS_MD1 (*(volatile unsigned long *)0x01C15050)
#define SS_MD2 (*(volatile unsigned long *)0x01C15054)
#define SS_MD3 (*(volatile unsigned long *)0x01C15058)
#define SS_MD4 (*(volatile unsigned long *)0x01C1505C)

#define SS_CTS_LEN 	(*(volatile unsigned long *)0x01C15060)
#define SS_RXFIFO 	(*(volatile unsigned long *)0x01C15200)
#define SS_TXFIFO 	(*(volatile unsigned long *)0x01C15204)

// END OF SECURITY REGISTERS

// CPU CONTROL REGISTERS

#define CPU0_RST_CTRL 			(*(volatile unsigned long *)0x01C25C40)
#define CPU0_CTRL_REG 			(*(volatile unsigned long *)0x01C25C44)
#define CPU0_STATUS_REG 		(*(volatile unsigned long *)0x01C25C48)
#define CPU1_RST_CTRL 			(*(volatile unsigned long *)0x01C25C80)
#define CPU1_CTRL_REG 			(*(volatile unsigned long *)0x01C25C84)
#define CPU1_STATUS_REG 		(*(volatile unsigned long *)0x01C25C88)
#define GENER_CTRL_REG 			(*(volatile unsigned long *)0x01C25D84)
#define EVENT_IN 				(*(volatile unsigned long *)0x01C25D90)
#define PRIVATE_REG 			(*(volatile unsigned long *)0x01C25DA4)
#define IDLE_CNT0_LOW_REG 		(*(volatile unsigned long *)0x01C25E00)
#define IDLE_CNT0_HIGH_REG 		(*(volatile unsigned long *)0x01C25E04)
#define IDLE_CNT0_CTRL_REG 		(*(volatile unsigned long *)0x01C25E08)
#define IDLE_CNT1_LOW_REG 		(*(volatile unsigned long *)0x01C25E10)
#define IDLE_CNT1_HIGH_REG 		(*(volatile unsigned long *)0x01C25E14)
#define IDLE_CNT1_CTRL_REG 		(*(volatile unsigned long *)0x01C25E18)
#define OSC24M_CNT64_CTRL_REG 	(*(volatile unsigned long *)0x01C25E80)
#define OSC24M_CNT64_LOW_REG 	(*(volatile unsigned long *)0x01C25E84)
#define OSC24M_CNT64_HIGH_REG 	(*(volatile unsigned long *)0x01C25E88)
#define LOSC_CNT64_CTRL_REG 	(*(volatile unsigned long *)0x01C25E90)
#define LOSC_CNT64_LOW_REG 		(*(volatile unsigned long *)0x01C25E94)
#define LOSC_CNT64_HIGH_REG 	(*(volatile unsigned long *)0x01C25E98)

// END OF CPU CONTROL REGISTERS

// CCU CONTROL REGISTERS

#define PLL1_CFG_REG                   (*(volatile unsigned long *)0x01C20000)
#define PLL1_CFG_REG_OFFSET            0x0000

#define PLL1_TUN_REG                   (*(volatile unsigned long *)0x01C20004)
#define PLL1_TUN_REG_OFFSET            0x0004

#define PLL2_CFG_REG                   (*(volatile unsigned long *)0x01C20008)
#define PLL2_CFG_REG_OFFSET            0x0008

#define PLL2_TUN_REG                   (*(volatile unsigned long *)0x01C2000C)
#define PLL2_TUN_REG_OFFSET            0x000C

#define PLL3_CFG_REG                   (*(volatile unsigned long *)0x01C20010)
#define PLL3_CFG_REG_OFFSET            0x0010

#define PLL4_CFG_REG                   (*(volatile unsigned long *)0x01C20018)
#define PLL4_CFG_REG_OFFSET            0x0018

#define PLL5_CFG_REG                   (*(volatile unsigned long *)0x01C20020)
#define PLL5_CFG_REG_OFFSET            0x0020

#define PLL5_TUN_REG                   (*(volatile unsigned long *)0x01C20024)
#define PLL5_TUN_REG_OFFSET            0x0024

#define PLL6_CFG_REG                   (*(volatile unsigned long *)0x01C20028)
#define PLL6_CFG_REG_OFFSET            0x0028

#define PLL6_TUN_REG                   (*(volatile unsigned long *)0x01C2002C)
#define PLL6_TUN_REG_OFFSET            0x002C

#define PLL7_CFG_REG                   (*(volatile unsigned long *)0x01C20030)
#define PLL7_CFG_REG_OFFSET            0x0030

#define PLL1_TUN2_REG                  (*(volatile unsigned long *)0x01C20038)
#define PLL1_TUN2_REG_OFFSET           0x0038

#define PLL5_TUN2_REG                  (*(volatile unsigned long *)0x01C2003C)
#define PLL5_TUN2_REG_OFFSET           0x003C

#define PLL8_CFG_REG                   (*(volatile unsigned long *)0x01C20040)
#define PLL8_CFG_REG_OFFSET            0x0040

#define OSC24M_CFG_REG                 (*(volatile unsigned long *)0x01C20050)
#define OSC24M_CFG_REG_OFFSET          0x0050

#define CPU_AHB_APB0_CFG_REG           (*(volatile unsigned long *)0x01C20054)
#define CPU_AHB_APB0_CFG_REG_OFFSET    0x0054

#define APB1_CLK_DIV_REG               (*(volatile unsigned long *)0x01C20058)
#define APB1_CLK_DIV_REG_OFFSET        0x0058

#define AHB_GATING_REG0                (*(volatile unsigned long *)0x01C20060)
#define AHB_GATING_REG0_OFFSET         0x0060

#define AHB_GATING_REG1                (*(volatile unsigned long *)0x01C20064)
#define AHB_GATING_REG1_OFFSET         0x0064

#define APB0_GATING_REG                (*(volatile unsigned long *)0x01C20068)
#define APB0_GATING_REG_OFFSET         0x0068

#define APB1_GATING_REG                (*(volatile unsigned long *)0x01C2006C)
#define APB1_GATING_REG_OFFSET         0x006C

#define NAND_SCLK_CFG_REG              (*(volatile unsigned long *)0x01C20080)
#define NAND_SCLK_CFG_REG_OFFSET       0x0080

#define MS_SCLK_CFG_REG                (*(volatile unsigned long *)0x01C20084)
#define MS_SCLK_CFG_REG_OFFSET         0x0084

#define SD0_CLK_REG                    (*(volatile unsigned long *)0x01C20088)
#define SD0_CLK_REG_OFFSET             0x0088

#define SD1_CLK_REG                    (*(volatile unsigned long *)0x01C2008C)
#define SD1_CLK_REG_OFFSET             0x008C

#define SD2_CLK_REG                    (*(volatile unsigned long *)0x01C20090)
#define SD2_CLK_REG_OFFSET             0x0090

#define SD3_CLK_REG                    (*(volatile unsigned long *)0x01C20094)
#define SD3_CLK_REG_OFFSET             0x0094

#define TS_CLK_REG                     (*(volatile unsigned long *)0x01C20098)
#define TS_CLK_REG_OFFSET              0x0098

#define SS_CLK_REG                     (*(volatile unsigned long *)0x01C2009C)
#define SS_CLK_REG_OFFSET              0x009C

#define SPI0_CLK_REG                   (*(volatile unsigned long *)0x01C200A0)
#define SPI0_CLK_REG_OFFSET            0x00A0

#define SPI1_CLK_REG                   (*(volatile unsigned long *)0x01C200A4)
#define SPI1_CLK_REG_OFFSET            0x00A4

#define SPI2_CLK_REG                   (*(volatile unsigned long *)0x01C200A8)
#define SPI2_CLK_REG_OFFSET            0x00A8

#define IR0_CLK_REG                    (*(volatile unsigned long *)0x01C200B0)
#define IR0_CLK_REG_OFFSET             0x00B0

#define IR1_CLK_REG                    (*(volatile unsigned long *)0x01C200B4)
#define IR1_CLK_REG_OFFSET             0x00B4

#define IIS0_CLK_REG                   (*(volatile unsigned long *)0x01C200B8)
#define IIS0_CLK_REG_OFFSET            0x00B8

#define AC97_CLK_REG                   (*(volatile unsigned long *)0x01C200BC)
#define AC97_CLK_REG_OFFSET            0x00BC

#define SPDIF_CLK_REG                  (*(volatile unsigned long *)0x01C200C0)
#define SPDIF_CLK_REG_OFFSET           0x00C0

#define KEYPAD_CLK_REG                 (*(volatile unsigned long *)0x01C200C4)
#define KEYPAD_CLK_REG_OFFSET          0x00C4

#define SATA_CLK_REG                   (*(volatile unsigned long *)0x01C200C8)
#define SATA_CLK_REG_OFFSET            0x00C8

#define USB_CLK_REG                    (*(volatile unsigned long *)0x01C200CC)
#define USB_CLK_REG_OFFSET             0x00CC

#define SPI3_CLK_REG                   (*(volatile unsigned long *)0x01C200D4)
#define SPI3_CLK_REG_OFFSET            0x00D4

#define IIS1_CLK_REG                   (*(volatile unsigned long *)0x01C200D8)
#define IIS1_CLK_REG_OFFSET            0x00D8

#define IIS2_CLK_REG                   (*(volatile unsigned long *)0x01C200DC)
#define IIS2_CLK_REG_OFFSET            0x00DC

#define DRAM_CLK_REG                   (*(volatile unsigned long *)0x01C20100)
#define DRAM_CLK_REG_OFFSET            0x0100

#define BE0_SCLK_CFG_REG               (*(volatile unsigned long *)0x01C20104)
#define BE0_SCLK_CFG_REG_OFFSET        0x0104

#define BE1_SCLK_CFG_REG               (*(volatile unsigned long *)0x01C20108)
#define BE1_SCLK_CFG_REG_OFFSET        0x0108

#define FE0_CLK_REG                    (*(volatile unsigned long *)0x01C2010C)
#define FE0_CLK_REG_OFFSET             0x010C

#define FE1_CLK_REG                    (*(volatile unsigned long *)0x01C20110)
#define FE1_CLK_REG_OFFSET             0x0110

#define MP_CLK_REG                     (*(volatile unsigned long *)0x01C20114)
#define MP_CLK_REG_OFFSET              0x0114

#define LCD0_CH0_CLK_REG               (*(volatile unsigned long *)0x01C20118)
#define LCD0_CH0_CLK_REG_OFFSET        0x0118

#define LCD1_CH0_CLK_REG               (*(volatile unsigned long *)0x01C2011C)
#define LCD1_CH0_CLK_REG_OFFSET        0x011C

#define CSI_SCLK_REG                   (*(volatile unsigned long *)0x01C20120)
#define CSI_SCLK_REG_OFFSET            0x0120

#define TVD_CLK_REG                    (*(volatile unsigned long *)0x01C20128)
#define TVD_CLK_REG_OFFSET             0x0128

#define LCD0_CH1_CLK_REG               (*(volatile unsigned long *)0x01C2012C)
#define LCD0_CH1_CLK_REG_OFFSET        0x012C

#define LCD1_CH1_CLK_REG               (*(volatile unsigned long *)0x01C20130)
#define LCD1_CH1_CLK_REG_OFFSET        0x0130

#define CSI0_CLK_REG                   (*(volatile unsigned long *)0x01C20134)
#define CSI0_CLK_REG_OFFSET            0x0134

#define CSI1_CLK_REG                   (*(volatile unsigned long *)0x01C20138)
#define CSI1_CLK_REG_OFFSET            0x0138

#define VE_CLK_REG                     (*(volatile unsigned long *)0x01C2013C)
#define VE_CLK_REG_OFFSET              0x013C

#define AUDIO_CODEC_CLK_REG            (*(volatile unsigned long *)0x01C20140)
#define AUDIO_CODEC_CLK_REG_OFFSET     0x0140

#define AVS_CLK_REG                    (*(volatile unsigned long *)0x01C20144)
#define AVS_CLK_REG_OFFSET             0x0144

#define ACE_CLK_REG                    (*(volatile unsigned long *)0x01C20148)
#define ACE_CLK_REG_OFFSET             0x0148

#define LVDS_CLK_REG                   (*(volatile unsigned long *)0x01C2014C)
#define LVDS_CLK_REG_OFFSET            0x014C

#define HDMI_CLK_REG                   (*(volatile unsigned long *)0x01C20150)
#define HDMI_CLK_REG_OFFSET            0x0150

#define MALI400_CLK_REG                (*(volatile unsigned long *)0x01C20154)
#define MALI400_CLK_REG_OFFSET         0x0154

#define MBUS_SCLK_CFG_REG              (*(volatile unsigned long *)0x01C2015C)
#define MBUS_SCLK_CFG_REG_OFFSET       0x015C

#define GMAC_CLK_REG                   (*(volatile unsigned long *)0x01C20164)
#define GMAC_CLK_REG_OFFSET            0x0164

#define HDMI1_RST_REG                  (*(volatile unsigned long *)0x01C20170)
#define HDMI1_RST_REG_OFFSET           0x0170

#define HDMI1_CTRL_REG                 (*(volatile unsigned long *)0x01C20174)
#define HDMI1_CTRL_REG_OFFSET          0x0174

#define HDMI1_SLOW_CLK_REG             (*(volatile unsigned long *)0x01C20178)
#define HDMI1_SLOW_CLK_REG_OFFSET      0x0178

#define HDMI1_REPEAT_CLK_REG           (*(volatile unsigned long *)0x01C2017C)
#define HDMI1_REPEAT_CLK_REG_OFFSET    0x017C

#define CLK_OUTA_REG                   (*(volatile unsigned long *)0x01C201F0)
#define CLK_OUTA_REG_OFFSET            0x01F0

#define CLK_OUTB_REG                   (*(volatile unsigned long *)0x01C201F4)
#define CLK_OUTB_REG_OFFSET            0x01F4


// END OF CCU CONTROL REGISTERS

#endif /* __A20_H__ */