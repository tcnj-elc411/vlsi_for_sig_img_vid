/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* ADC */
.set ADC_ADC_SAR__CLK, CYREG_SAR0_CLK
.set ADC_ADC_SAR__CSR0, CYREG_SAR0_CSR0
.set ADC_ADC_SAR__CSR1, CYREG_SAR0_CSR1
.set ADC_ADC_SAR__CSR2, CYREG_SAR0_CSR2
.set ADC_ADC_SAR__CSR3, CYREG_SAR0_CSR3
.set ADC_ADC_SAR__CSR4, CYREG_SAR0_CSR4
.set ADC_ADC_SAR__CSR5, CYREG_SAR0_CSR5
.set ADC_ADC_SAR__CSR6, CYREG_SAR0_CSR6
.set ADC_ADC_SAR__PM_ACT_CFG, CYREG_PM_ACT_CFG11
.set ADC_ADC_SAR__PM_ACT_MSK, 0x01
.set ADC_ADC_SAR__PM_STBY_CFG, CYREG_PM_STBY_CFG11
.set ADC_ADC_SAR__PM_STBY_MSK, 0x01
.set ADC_ADC_SAR__SW0, CYREG_SAR0_SW0
.set ADC_ADC_SAR__SW2, CYREG_SAR0_SW2
.set ADC_ADC_SAR__SW3, CYREG_SAR0_SW3
.set ADC_ADC_SAR__SW4, CYREG_SAR0_SW4
.set ADC_ADC_SAR__SW6, CYREG_SAR0_SW6
.set ADC_ADC_SAR__TR0, CYREG_SAR0_TR0
.set ADC_ADC_SAR__WRK0, CYREG_SAR0_WRK0
.set ADC_ADC_SAR__WRK1, CYREG_SAR0_WRK1
.set ADC_IN__0__INTTYPE, CYREG_PICU0_INTTYPE4
.set ADC_IN__0__MASK, 0x10
.set ADC_IN__0__PC, CYREG_PRT0_PC4
.set ADC_IN__0__PORT, 0
.set ADC_IN__0__SHIFT, 4
.set ADC_IN__AG, CYREG_PRT0_AG
.set ADC_IN__AMUX, CYREG_PRT0_AMUX
.set ADC_IN__BIE, CYREG_PRT0_BIE
.set ADC_IN__BIT_MASK, CYREG_PRT0_BIT_MASK
.set ADC_IN__BYP, CYREG_PRT0_BYP
.set ADC_IN__CTL, CYREG_PRT0_CTL
.set ADC_IN__DM0, CYREG_PRT0_DM0
.set ADC_IN__DM1, CYREG_PRT0_DM1
.set ADC_IN__DM2, CYREG_PRT0_DM2
.set ADC_IN__DR, CYREG_PRT0_DR
.set ADC_IN__INP_DIS, CYREG_PRT0_INP_DIS
.set ADC_IN__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set ADC_IN__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set ADC_IN__LCD_EN, CYREG_PRT0_LCD_EN
.set ADC_IN__MASK, 0x10
.set ADC_IN__PORT, 0
.set ADC_IN__PRT, CYREG_PRT0_PRT
.set ADC_IN__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set ADC_IN__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set ADC_IN__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set ADC_IN__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set ADC_IN__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set ADC_IN__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set ADC_IN__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set ADC_IN__PS, CYREG_PRT0_PS
.set ADC_IN__SHIFT, 4
.set ADC_IN__SLW, CYREG_PRT0_SLW
.set ADC_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ADC_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ADC_IRQ__INTC_MASK, 0x01
.set ADC_IRQ__INTC_NUMBER, 0
.set ADC_IRQ__INTC_PRIOR_NUM, 7
.set ADC_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set ADC_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ADC_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set ADC_theACLK__CFG0, CYREG_CLKDIST_ACFG0_CFG0
.set ADC_theACLK__CFG1, CYREG_CLKDIST_ACFG0_CFG1
.set ADC_theACLK__CFG2, CYREG_CLKDIST_ACFG0_CFG2
.set ADC_theACLK__CFG2_SRC_SEL_MASK, 0x07
.set ADC_theACLK__CFG3, CYREG_CLKDIST_ACFG0_CFG3
.set ADC_theACLK__CFG3_PHASE_DLY_MASK, 0x0F
.set ADC_theACLK__INDEX, 0x00
.set ADC_theACLK__PM_ACT_CFG, CYREG_PM_ACT_CFG1
.set ADC_theACLK__PM_ACT_MSK, 0x01
.set ADC_theACLK__PM_STBY_CFG, CYREG_PM_STBY_CFG1
.set ADC_theACLK__PM_STBY_MSK, 0x01

/* DAC */
.set DAC_OUT__0__INTTYPE, CYREG_PICU0_INTTYPE5
.set DAC_OUT__0__MASK, 0x20
.set DAC_OUT__0__PC, CYREG_PRT0_PC5
.set DAC_OUT__0__PORT, 0
.set DAC_OUT__0__SHIFT, 5
.set DAC_OUT__AG, CYREG_PRT0_AG
.set DAC_OUT__AMUX, CYREG_PRT0_AMUX
.set DAC_OUT__BIE, CYREG_PRT0_BIE
.set DAC_OUT__BIT_MASK, CYREG_PRT0_BIT_MASK
.set DAC_OUT__BYP, CYREG_PRT0_BYP
.set DAC_OUT__CTL, CYREG_PRT0_CTL
.set DAC_OUT__DM0, CYREG_PRT0_DM0
.set DAC_OUT__DM1, CYREG_PRT0_DM1
.set DAC_OUT__DM2, CYREG_PRT0_DM2
.set DAC_OUT__DR, CYREG_PRT0_DR
.set DAC_OUT__INP_DIS, CYREG_PRT0_INP_DIS
.set DAC_OUT__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set DAC_OUT__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set DAC_OUT__LCD_EN, CYREG_PRT0_LCD_EN
.set DAC_OUT__MASK, 0x20
.set DAC_OUT__PORT, 0
.set DAC_OUT__PRT, CYREG_PRT0_PRT
.set DAC_OUT__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set DAC_OUT__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set DAC_OUT__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set DAC_OUT__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set DAC_OUT__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set DAC_OUT__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set DAC_OUT__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set DAC_OUT__PS, CYREG_PRT0_PS
.set DAC_OUT__SHIFT, 5
.set DAC_OUT__SLW, CYREG_PRT0_SLW
.set DAC_viDAC8__CR0, CYREG_DAC2_CR0
.set DAC_viDAC8__CR1, CYREG_DAC2_CR1
.set DAC_viDAC8__D, CYREG_DAC2_D
.set DAC_viDAC8__PM_ACT_CFG, CYREG_PM_ACT_CFG8
.set DAC_viDAC8__PM_ACT_MSK, 0x04
.set DAC_viDAC8__PM_STBY_CFG, CYREG_PM_STBY_CFG8
.set DAC_viDAC8__PM_STBY_MSK, 0x04
.set DAC_viDAC8__STROBE, CYREG_DAC2_STROBE
.set DAC_viDAC8__SW0, CYREG_DAC2_SW0
.set DAC_viDAC8__SW2, CYREG_DAC2_SW2
.set DAC_viDAC8__SW3, CYREG_DAC2_SW3
.set DAC_viDAC8__SW4, CYREG_DAC2_SW4
.set DAC_viDAC8__TR, CYREG_DAC2_TR
.set DAC_viDAC8__TRIM__M1, CYREG_FLSHID_CUST_TABLES_DAC2_M1
.set DAC_viDAC8__TRIM__M2, CYREG_FLSHID_CUST_TABLES_DAC2_M2
.set DAC_viDAC8__TRIM__M3, CYREG_FLSHID_CUST_TABLES_DAC2_M3
.set DAC_viDAC8__TRIM__M4, CYREG_FLSHID_CUST_TABLES_DAC2_M4
.set DAC_viDAC8__TRIM__M5, CYREG_FLSHID_CUST_TABLES_DAC2_M5
.set DAC_viDAC8__TRIM__M6, CYREG_FLSHID_CUST_TABLES_DAC2_M6
.set DAC_viDAC8__TRIM__M7, CYREG_FLSHID_CUST_TABLES_DAC2_M7
.set DAC_viDAC8__TRIM__M8, CYREG_FLSHID_CUST_TABLES_DAC2_M8
.set DAC_viDAC8__TST, CYREG_DAC2_TST

/* I2S */
.set I2S_bI2S_BitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB03_04_ACTL
.set I2S_bI2S_BitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB03_04_CTL
.set I2S_bI2S_BitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB03_04_CTL
.set I2S_bI2S_BitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB03_04_CTL
.set I2S_bI2S_BitCounter__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB03_04_CTL
.set I2S_bI2S_BitCounter__16BIT_MASK_MASK_REG, CYREG_B0_UDB03_04_MSK
.set I2S_bI2S_BitCounter__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB03_04_MSK
.set I2S_bI2S_BitCounter__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB03_04_MSK
.set I2S_bI2S_BitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB03_04_MSK
.set I2S_bI2S_BitCounter__CONTROL_AUX_CTL_REG, CYREG_B0_UDB03_ACTL
.set I2S_bI2S_BitCounter__CONTROL_REG, CYREG_B0_UDB03_CTL
.set I2S_bI2S_BitCounter__CONTROL_ST_REG, CYREG_B0_UDB03_ST_CTL
.set I2S_bI2S_BitCounter__COUNT_REG, CYREG_B0_UDB03_CTL
.set I2S_bI2S_BitCounter__COUNT_ST_REG, CYREG_B0_UDB03_ST_CTL
.set I2S_bI2S_BitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set I2S_bI2S_BitCounter__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set I2S_bI2S_BitCounter__PERIOD_REG, CYREG_B0_UDB03_MSK
.set I2S_bI2S_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB03_04_ACTL
.set I2S_bI2S_BitCounter_ST__16BIT_STATUS_REG, CYREG_B0_UDB03_04_ST
.set I2S_bI2S_BitCounter_ST__MASK_REG, CYREG_B0_UDB03_MSK
.set I2S_bI2S_BitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set I2S_bI2S_BitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set I2S_bI2S_BitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B0_UDB03_ACTL
.set I2S_bI2S_BitCounter_ST__STATUS_CNT_REG, CYREG_B0_UDB03_ST_CTL
.set I2S_bI2S_BitCounter_ST__STATUS_CONTROL_REG, CYREG_B0_UDB03_ST_CTL
.set I2S_bI2S_BitCounter_ST__STATUS_REG, CYREG_B0_UDB03_ST
.set I2S_bI2S_CtlReg__0__MASK, 0x01
.set I2S_bI2S_CtlReg__0__POS, 0
.set I2S_bI2S_CtlReg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB02_03_ACTL
.set I2S_bI2S_CtlReg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB02_03_CTL
.set I2S_bI2S_CtlReg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB02_03_CTL
.set I2S_bI2S_CtlReg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB02_03_CTL
.set I2S_bI2S_CtlReg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB02_03_CTL
.set I2S_bI2S_CtlReg__16BIT_MASK_MASK_REG, CYREG_B0_UDB02_03_MSK
.set I2S_bI2S_CtlReg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB02_03_MSK
.set I2S_bI2S_CtlReg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB02_03_MSK
.set I2S_bI2S_CtlReg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB02_03_MSK
.set I2S_bI2S_CtlReg__2__MASK, 0x04
.set I2S_bI2S_CtlReg__2__POS, 2
.set I2S_bI2S_CtlReg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB02_ACTL
.set I2S_bI2S_CtlReg__CONTROL_REG, CYREG_B0_UDB02_CTL
.set I2S_bI2S_CtlReg__CONTROL_ST_REG, CYREG_B0_UDB02_ST_CTL
.set I2S_bI2S_CtlReg__COUNT_REG, CYREG_B0_UDB02_CTL
.set I2S_bI2S_CtlReg__COUNT_ST_REG, CYREG_B0_UDB02_ST_CTL
.set I2S_bI2S_CtlReg__MASK, 0x05
.set I2S_bI2S_CtlReg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB02_MSK_ACTL
.set I2S_bI2S_CtlReg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB02_MSK_ACTL
.set I2S_bI2S_CtlReg__PERIOD_REG, CYREG_B0_UDB02_MSK
.set I2S_bI2S_Tx_CH_0__dpTx_u0__16BIT_A0_REG, CYREG_B0_UDB02_03_A0
.set I2S_bI2S_Tx_CH_0__dpTx_u0__16BIT_A1_REG, CYREG_B0_UDB02_03_A1
.set I2S_bI2S_Tx_CH_0__dpTx_u0__16BIT_D0_REG, CYREG_B0_UDB02_03_D0
.set I2S_bI2S_Tx_CH_0__dpTx_u0__16BIT_D1_REG, CYREG_B0_UDB02_03_D1
.set I2S_bI2S_Tx_CH_0__dpTx_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB02_03_ACTL
.set I2S_bI2S_Tx_CH_0__dpTx_u0__16BIT_F0_REG, CYREG_B0_UDB02_03_F0
.set I2S_bI2S_Tx_CH_0__dpTx_u0__16BIT_F1_REG, CYREG_B0_UDB02_03_F1
.set I2S_bI2S_Tx_CH_0__dpTx_u0__A0_A1_REG, CYREG_B0_UDB02_A0_A1
.set I2S_bI2S_Tx_CH_0__dpTx_u0__A0_REG, CYREG_B0_UDB02_A0
.set I2S_bI2S_Tx_CH_0__dpTx_u0__A1_REG, CYREG_B0_UDB02_A1
.set I2S_bI2S_Tx_CH_0__dpTx_u0__D0_D1_REG, CYREG_B0_UDB02_D0_D1
.set I2S_bI2S_Tx_CH_0__dpTx_u0__D0_REG, CYREG_B0_UDB02_D0
.set I2S_bI2S_Tx_CH_0__dpTx_u0__D1_REG, CYREG_B0_UDB02_D1
.set I2S_bI2S_Tx_CH_0__dpTx_u0__DP_AUX_CTL_REG, CYREG_B0_UDB02_ACTL
.set I2S_bI2S_Tx_CH_0__dpTx_u0__F0_F1_REG, CYREG_B0_UDB02_F0_F1
.set I2S_bI2S_Tx_CH_0__dpTx_u0__F0_REG, CYREG_B0_UDB02_F0
.set I2S_bI2S_Tx_CH_0__dpTx_u0__F1_REG, CYREG_B0_UDB02_F1
.set I2S_bI2S_Tx_CH_0__dpTx_u0__MSK_DP_AUX_CTL_REG, CYREG_B0_UDB02_MSK_ACTL
.set I2S_bI2S_Tx_CH_0__dpTx_u0__PER_DP_AUX_CTL_REG, CYREG_B0_UDB02_MSK_ACTL
.set I2S_bI2S_Tx_STS_0__Sts__0__MASK, 0x01
.set I2S_bI2S_Tx_STS_0__Sts__0__POS, 0
.set I2S_bI2S_Tx_STS_0__Sts__1__MASK, 0x02
.set I2S_bI2S_Tx_STS_0__Sts__1__POS, 1
.set I2S_bI2S_Tx_STS_0__Sts__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB02_03_ACTL
.set I2S_bI2S_Tx_STS_0__Sts__16BIT_STATUS_REG, CYREG_B0_UDB02_03_ST
.set I2S_bI2S_Tx_STS_0__Sts__MASK, 0x03
.set I2S_bI2S_Tx_STS_0__Sts__MASK_REG, CYREG_B0_UDB02_MSK
.set I2S_bI2S_Tx_STS_0__Sts__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB02_MSK_ACTL
.set I2S_bI2S_Tx_STS_0__Sts__PER_ST_AUX_CTL_REG, CYREG_B0_UDB02_MSK_ACTL
.set I2S_bI2S_Tx_STS_0__Sts__STATUS_AUX_CTL_REG, CYREG_B0_UDB02_ACTL
.set I2S_bI2S_Tx_STS_0__Sts__STATUS_CNT_REG, CYREG_B0_UDB02_ST_CTL
.set I2S_bI2S_Tx_STS_0__Sts__STATUS_CONTROL_REG, CYREG_B0_UDB02_ST_CTL
.set I2S_bI2S_Tx_STS_0__Sts__STATUS_REG, CYREG_B0_UDB02_ST
.set I2S_SCK_OUT__0__INTTYPE, CYREG_PICU0_INTTYPE0
.set I2S_SCK_OUT__0__MASK, 0x01
.set I2S_SCK_OUT__0__PC, CYREG_PRT0_PC0
.set I2S_SCK_OUT__0__PORT, 0
.set I2S_SCK_OUT__0__SHIFT, 0
.set I2S_SCK_OUT__AG, CYREG_PRT0_AG
.set I2S_SCK_OUT__AMUX, CYREG_PRT0_AMUX
.set I2S_SCK_OUT__BIE, CYREG_PRT0_BIE
.set I2S_SCK_OUT__BIT_MASK, CYREG_PRT0_BIT_MASK
.set I2S_SCK_OUT__BYP, CYREG_PRT0_BYP
.set I2S_SCK_OUT__CTL, CYREG_PRT0_CTL
.set I2S_SCK_OUT__DM0, CYREG_PRT0_DM0
.set I2S_SCK_OUT__DM1, CYREG_PRT0_DM1
.set I2S_SCK_OUT__DM2, CYREG_PRT0_DM2
.set I2S_SCK_OUT__DR, CYREG_PRT0_DR
.set I2S_SCK_OUT__INP_DIS, CYREG_PRT0_INP_DIS
.set I2S_SCK_OUT__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set I2S_SCK_OUT__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set I2S_SCK_OUT__LCD_EN, CYREG_PRT0_LCD_EN
.set I2S_SCK_OUT__MASK, 0x01
.set I2S_SCK_OUT__PORT, 0
.set I2S_SCK_OUT__PRT, CYREG_PRT0_PRT
.set I2S_SCK_OUT__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set I2S_SCK_OUT__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set I2S_SCK_OUT__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set I2S_SCK_OUT__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set I2S_SCK_OUT__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set I2S_SCK_OUT__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set I2S_SCK_OUT__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set I2S_SCK_OUT__PS, CYREG_PRT0_PS
.set I2S_SCK_OUT__SHIFT, 0
.set I2S_SCK_OUT__SLW, CYREG_PRT0_SLW
.set I2S_SD_OUT__0__INTTYPE, CYREG_PICU0_INTTYPE2
.set I2S_SD_OUT__0__MASK, 0x04
.set I2S_SD_OUT__0__PC, CYREG_PRT0_PC2
.set I2S_SD_OUT__0__PORT, 0
.set I2S_SD_OUT__0__SHIFT, 2
.set I2S_SD_OUT__AG, CYREG_PRT0_AG
.set I2S_SD_OUT__AMUX, CYREG_PRT0_AMUX
.set I2S_SD_OUT__BIE, CYREG_PRT0_BIE
.set I2S_SD_OUT__BIT_MASK, CYREG_PRT0_BIT_MASK
.set I2S_SD_OUT__BYP, CYREG_PRT0_BYP
.set I2S_SD_OUT__CTL, CYREG_PRT0_CTL
.set I2S_SD_OUT__DM0, CYREG_PRT0_DM0
.set I2S_SD_OUT__DM1, CYREG_PRT0_DM1
.set I2S_SD_OUT__DM2, CYREG_PRT0_DM2
.set I2S_SD_OUT__DR, CYREG_PRT0_DR
.set I2S_SD_OUT__INP_DIS, CYREG_PRT0_INP_DIS
.set I2S_SD_OUT__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set I2S_SD_OUT__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set I2S_SD_OUT__LCD_EN, CYREG_PRT0_LCD_EN
.set I2S_SD_OUT__MASK, 0x04
.set I2S_SD_OUT__PORT, 0
.set I2S_SD_OUT__PRT, CYREG_PRT0_PRT
.set I2S_SD_OUT__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set I2S_SD_OUT__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set I2S_SD_OUT__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set I2S_SD_OUT__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set I2S_SD_OUT__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set I2S_SD_OUT__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set I2S_SD_OUT__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set I2S_SD_OUT__PS, CYREG_PRT0_PS
.set I2S_SD_OUT__SHIFT, 2
.set I2S_SD_OUT__SLW, CYREG_PRT0_SLW
.set I2S_WS_OUT__0__INTTYPE, CYREG_PICU0_INTTYPE3
.set I2S_WS_OUT__0__MASK, 0x08
.set I2S_WS_OUT__0__PC, CYREG_PRT0_PC3
.set I2S_WS_OUT__0__PORT, 0
.set I2S_WS_OUT__0__SHIFT, 3
.set I2S_WS_OUT__AG, CYREG_PRT0_AG
.set I2S_WS_OUT__AMUX, CYREG_PRT0_AMUX
.set I2S_WS_OUT__BIE, CYREG_PRT0_BIE
.set I2S_WS_OUT__BIT_MASK, CYREG_PRT0_BIT_MASK
.set I2S_WS_OUT__BYP, CYREG_PRT0_BYP
.set I2S_WS_OUT__CTL, CYREG_PRT0_CTL
.set I2S_WS_OUT__DM0, CYREG_PRT0_DM0
.set I2S_WS_OUT__DM1, CYREG_PRT0_DM1
.set I2S_WS_OUT__DM2, CYREG_PRT0_DM2
.set I2S_WS_OUT__DR, CYREG_PRT0_DR
.set I2S_WS_OUT__INP_DIS, CYREG_PRT0_INP_DIS
.set I2S_WS_OUT__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set I2S_WS_OUT__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set I2S_WS_OUT__LCD_EN, CYREG_PRT0_LCD_EN
.set I2S_WS_OUT__MASK, 0x08
.set I2S_WS_OUT__PORT, 0
.set I2S_WS_OUT__PRT, CYREG_PRT0_PRT
.set I2S_WS_OUT__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set I2S_WS_OUT__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set I2S_WS_OUT__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set I2S_WS_OUT__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set I2S_WS_OUT__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set I2S_WS_OUT__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set I2S_WS_OUT__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set I2S_WS_OUT__PS, CYREG_PRT0_PS
.set I2S_WS_OUT__SHIFT, 3
.set I2S_WS_OUT__SLW, CYREG_PRT0_SLW

/* SW2 */
.set SW2__0__INTTYPE, CYREG_PICU6_INTTYPE1
.set SW2__0__MASK, 0x02
.set SW2__0__PC, CYREG_PRT6_PC1
.set SW2__0__PORT, 6
.set SW2__0__SHIFT, 1
.set SW2__AG, CYREG_PRT6_AG
.set SW2__AMUX, CYREG_PRT6_AMUX
.set SW2__BIE, CYREG_PRT6_BIE
.set SW2__BIT_MASK, CYREG_PRT6_BIT_MASK
.set SW2__BYP, CYREG_PRT6_BYP
.set SW2__CTL, CYREG_PRT6_CTL
.set SW2__DM0, CYREG_PRT6_DM0
.set SW2__DM1, CYREG_PRT6_DM1
.set SW2__DM2, CYREG_PRT6_DM2
.set SW2__DR, CYREG_PRT6_DR
.set SW2__INP_DIS, CYREG_PRT6_INP_DIS
.set SW2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU6_BASE
.set SW2__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set SW2__LCD_EN, CYREG_PRT6_LCD_EN
.set SW2__MASK, 0x02
.set SW2__PORT, 6
.set SW2__PRT, CYREG_PRT6_PRT
.set SW2__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set SW2__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set SW2__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set SW2__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set SW2__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set SW2__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set SW2__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set SW2__PS, CYREG_PRT6_PS
.set SW2__SHIFT, 1
.set SW2__SLW, CYREG_PRT6_SLW

/* SW3 */
.set SW3__0__INTTYPE, CYREG_PICU15_INTTYPE5
.set SW3__0__MASK, 0x20
.set SW3__0__PC, CYREG_IO_PC_PRT15_PC5
.set SW3__0__PORT, 15
.set SW3__0__SHIFT, 5
.set SW3__AG, CYREG_PRT15_AG
.set SW3__AMUX, CYREG_PRT15_AMUX
.set SW3__BIE, CYREG_PRT15_BIE
.set SW3__BIT_MASK, CYREG_PRT15_BIT_MASK
.set SW3__BYP, CYREG_PRT15_BYP
.set SW3__CTL, CYREG_PRT15_CTL
.set SW3__DM0, CYREG_PRT15_DM0
.set SW3__DM1, CYREG_PRT15_DM1
.set SW3__DM2, CYREG_PRT15_DM2
.set SW3__DR, CYREG_PRT15_DR
.set SW3__INP_DIS, CYREG_PRT15_INP_DIS
.set SW3__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set SW3__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set SW3__LCD_EN, CYREG_PRT15_LCD_EN
.set SW3__MASK, 0x20
.set SW3__PORT, 15
.set SW3__PRT, CYREG_PRT15_PRT
.set SW3__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set SW3__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set SW3__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set SW3__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set SW3__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set SW3__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set SW3__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set SW3__PS, CYREG_PRT15_PS
.set SW3__SHIFT, 5
.set SW3__SLW, CYREG_PRT15_SLW

/* Clock_1 */
.set Clock_1__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set Clock_1__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set Clock_1__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set Clock_1__CFG2_SRC_SEL_MASK, 0x07
.set Clock_1__INDEX, 0x00
.set Clock_1__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_1__PM_ACT_MSK, 0x01
.set Clock_1__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_1__PM_STBY_MSK, 0x01

/* OUT_I2S_WS */
.set OUT_I2S_WS__0__INTTYPE, CYREG_PICU12_INTTYPE5
.set OUT_I2S_WS__0__MASK, 0x20
.set OUT_I2S_WS__0__PC, CYREG_PRT12_PC5
.set OUT_I2S_WS__0__PORT, 12
.set OUT_I2S_WS__0__SHIFT, 5
.set OUT_I2S_WS__AG, CYREG_PRT12_AG
.set OUT_I2S_WS__BIE, CYREG_PRT12_BIE
.set OUT_I2S_WS__BIT_MASK, CYREG_PRT12_BIT_MASK
.set OUT_I2S_WS__BYP, CYREG_PRT12_BYP
.set OUT_I2S_WS__DM0, CYREG_PRT12_DM0
.set OUT_I2S_WS__DM1, CYREG_PRT12_DM1
.set OUT_I2S_WS__DM2, CYREG_PRT12_DM2
.set OUT_I2S_WS__DR, CYREG_PRT12_DR
.set OUT_I2S_WS__INP_DIS, CYREG_PRT12_INP_DIS
.set OUT_I2S_WS__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set OUT_I2S_WS__MASK, 0x20
.set OUT_I2S_WS__PORT, 12
.set OUT_I2S_WS__PRT, CYREG_PRT12_PRT
.set OUT_I2S_WS__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set OUT_I2S_WS__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set OUT_I2S_WS__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set OUT_I2S_WS__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set OUT_I2S_WS__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set OUT_I2S_WS__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set OUT_I2S_WS__PS, CYREG_PRT12_PS
.set OUT_I2S_WS__SHIFT, 5
.set OUT_I2S_WS__SIO_CFG, CYREG_PRT12_SIO_CFG
.set OUT_I2S_WS__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set OUT_I2S_WS__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set OUT_I2S_WS__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set OUT_I2S_WS__SLW, CYREG_PRT12_SLW

/* isr_i2s_tx */
.set isr_i2s_tx__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_i2s_tx__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_i2s_tx__INTC_MASK, 0x04
.set isr_i2s_tx__INTC_NUMBER, 2
.set isr_i2s_tx__INTC_PRIOR_NUM, 7
.set isr_i2s_tx__INTC_PRIOR_REG, CYREG_NVIC_PRI_2
.set isr_i2s_tx__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_i2s_tx__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* OUT_ADC_INT */
.set OUT_ADC_INT__0__INTTYPE, CYREG_PICU12_INTTYPE4
.set OUT_ADC_INT__0__MASK, 0x10
.set OUT_ADC_INT__0__PC, CYREG_PRT12_PC4
.set OUT_ADC_INT__0__PORT, 12
.set OUT_ADC_INT__0__SHIFT, 4
.set OUT_ADC_INT__AG, CYREG_PRT12_AG
.set OUT_ADC_INT__BIE, CYREG_PRT12_BIE
.set OUT_ADC_INT__BIT_MASK, CYREG_PRT12_BIT_MASK
.set OUT_ADC_INT__BYP, CYREG_PRT12_BYP
.set OUT_ADC_INT__DM0, CYREG_PRT12_DM0
.set OUT_ADC_INT__DM1, CYREG_PRT12_DM1
.set OUT_ADC_INT__DM2, CYREG_PRT12_DM2
.set OUT_ADC_INT__DR, CYREG_PRT12_DR
.set OUT_ADC_INT__INP_DIS, CYREG_PRT12_INP_DIS
.set OUT_ADC_INT__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set OUT_ADC_INT__MASK, 0x10
.set OUT_ADC_INT__PORT, 12
.set OUT_ADC_INT__PRT, CYREG_PRT12_PRT
.set OUT_ADC_INT__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set OUT_ADC_INT__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set OUT_ADC_INT__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set OUT_ADC_INT__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set OUT_ADC_INT__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set OUT_ADC_INT__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set OUT_ADC_INT__PS, CYREG_PRT12_PS
.set OUT_ADC_INT__SHIFT, 4
.set OUT_ADC_INT__SIO_CFG, CYREG_PRT12_SIO_CFG
.set OUT_ADC_INT__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set OUT_ADC_INT__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set OUT_ADC_INT__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set OUT_ADC_INT__SLW, CYREG_PRT12_SLW

/* isr_adc_eoc */
.set isr_adc_eoc__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_adc_eoc__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_adc_eoc__INTC_MASK, 0x02
.set isr_adc_eoc__INTC_NUMBER, 1
.set isr_adc_eoc__INTC_PRIOR_NUM, 7
.set isr_adc_eoc__INTC_PRIOR_REG, CYREG_NVIC_PRI_1
.set isr_adc_eoc__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_adc_eoc__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* PARALLEL_OUT */
.set PARALLEL_OUT__0__INTTYPE, CYREG_PICU3_INTTYPE0
.set PARALLEL_OUT__0__MASK, 0x01
.set PARALLEL_OUT__0__PC, CYREG_PRT3_PC0
.set PARALLEL_OUT__0__PORT, 3
.set PARALLEL_OUT__0__SHIFT, 0
.set PARALLEL_OUT__1__INTTYPE, CYREG_PICU3_INTTYPE1
.set PARALLEL_OUT__1__MASK, 0x02
.set PARALLEL_OUT__1__PC, CYREG_PRT3_PC1
.set PARALLEL_OUT__1__PORT, 3
.set PARALLEL_OUT__1__SHIFT, 1
.set PARALLEL_OUT__2__INTTYPE, CYREG_PICU3_INTTYPE2
.set PARALLEL_OUT__2__MASK, 0x04
.set PARALLEL_OUT__2__PC, CYREG_PRT3_PC2
.set PARALLEL_OUT__2__PORT, 3
.set PARALLEL_OUT__2__SHIFT, 2
.set PARALLEL_OUT__3__INTTYPE, CYREG_PICU3_INTTYPE3
.set PARALLEL_OUT__3__MASK, 0x08
.set PARALLEL_OUT__3__PC, CYREG_PRT3_PC3
.set PARALLEL_OUT__3__PORT, 3
.set PARALLEL_OUT__3__SHIFT, 3
.set PARALLEL_OUT__4__INTTYPE, CYREG_PICU3_INTTYPE4
.set PARALLEL_OUT__4__MASK, 0x10
.set PARALLEL_OUT__4__PC, CYREG_PRT3_PC4
.set PARALLEL_OUT__4__PORT, 3
.set PARALLEL_OUT__4__SHIFT, 4
.set PARALLEL_OUT__5__INTTYPE, CYREG_PICU3_INTTYPE5
.set PARALLEL_OUT__5__MASK, 0x20
.set PARALLEL_OUT__5__PC, CYREG_PRT3_PC5
.set PARALLEL_OUT__5__PORT, 3
.set PARALLEL_OUT__5__SHIFT, 5
.set PARALLEL_OUT__6__INTTYPE, CYREG_PICU3_INTTYPE6
.set PARALLEL_OUT__6__MASK, 0x40
.set PARALLEL_OUT__6__PC, CYREG_PRT3_PC6
.set PARALLEL_OUT__6__PORT, 3
.set PARALLEL_OUT__6__SHIFT, 6
.set PARALLEL_OUT__7__INTTYPE, CYREG_PICU3_INTTYPE7
.set PARALLEL_OUT__7__MASK, 0x80
.set PARALLEL_OUT__7__PC, CYREG_PRT3_PC7
.set PARALLEL_OUT__7__PORT, 3
.set PARALLEL_OUT__7__SHIFT, 7
.set PARALLEL_OUT__AG, CYREG_PRT3_AG
.set PARALLEL_OUT__AMUX, CYREG_PRT3_AMUX
.set PARALLEL_OUT__BIE, CYREG_PRT3_BIE
.set PARALLEL_OUT__BIT_MASK, CYREG_PRT3_BIT_MASK
.set PARALLEL_OUT__BYP, CYREG_PRT3_BYP
.set PARALLEL_OUT__CTL, CYREG_PRT3_CTL
.set PARALLEL_OUT__DM0, CYREG_PRT3_DM0
.set PARALLEL_OUT__DM1, CYREG_PRT3_DM1
.set PARALLEL_OUT__DM2, CYREG_PRT3_DM2
.set PARALLEL_OUT__DR, CYREG_PRT3_DR
.set PARALLEL_OUT__INP_DIS, CYREG_PRT3_INP_DIS
.set PARALLEL_OUT__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set PARALLEL_OUT__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set PARALLEL_OUT__LCD_EN, CYREG_PRT3_LCD_EN
.set PARALLEL_OUT__MASK, 0xFF
.set PARALLEL_OUT__PORT, 3
.set PARALLEL_OUT__PRT, CYREG_PRT3_PRT
.set PARALLEL_OUT__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set PARALLEL_OUT__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set PARALLEL_OUT__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set PARALLEL_OUT__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set PARALLEL_OUT__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set PARALLEL_OUT__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set PARALLEL_OUT__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set PARALLEL_OUT__PS, CYREG_PRT3_PS
.set PARALLEL_OUT__SHIFT, 0
.set PARALLEL_OUT__SLW, CYREG_PRT3_SLW

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 21
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E123069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 21
.set CYDEV_CHIP_MEMBER_4D, 16
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 22
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 20
.set CYDEV_CHIP_MEMBER_4I, 26
.set CYDEV_CHIP_MEMBER_4J, 17
.set CYDEV_CHIP_MEMBER_4K, 18
.set CYDEV_CHIP_MEMBER_4L, 25
.set CYDEV_CHIP_MEMBER_4M, 24
.set CYDEV_CHIP_MEMBER_4N, 11
.set CYDEV_CHIP_MEMBER_4O, 8
.set CYDEV_CHIP_MEMBER_4P, 23
.set CYDEV_CHIP_MEMBER_4Q, 14
.set CYDEV_CHIP_MEMBER_4R, 9
.set CYDEV_CHIP_MEMBER_4S, 12
.set CYDEV_CHIP_MEMBER_4T, 10
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 19
.set CYDEV_CHIP_MEMBER_4W, 13
.set CYDEV_CHIP_MEMBER_4X, 7
.set CYDEV_CHIP_MEMBER_4Y, 15
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 27
.set CYDEV_CHIP_MEMBER_FM3, 31
.set CYDEV_CHIP_MEMBER_FM4, 32
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 28
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 29
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 30
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4W_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4X_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Y_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000007
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif