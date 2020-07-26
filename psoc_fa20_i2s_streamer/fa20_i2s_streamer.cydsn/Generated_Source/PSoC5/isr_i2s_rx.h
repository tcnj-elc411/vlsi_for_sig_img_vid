/*******************************************************************************
* File Name: isr_i2s_rx.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_isr_i2s_rx_H)
#define CY_ISR_isr_i2s_rx_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void isr_i2s_rx_Start(void);
void isr_i2s_rx_StartEx(cyisraddress address);
void isr_i2s_rx_Stop(void);

CY_ISR_PROTO(isr_i2s_rx_Interrupt);

void isr_i2s_rx_SetVector(cyisraddress address);
cyisraddress isr_i2s_rx_GetVector(void);

void isr_i2s_rx_SetPriority(uint8 priority);
uint8 isr_i2s_rx_GetPriority(void);

void isr_i2s_rx_Enable(void);
uint8 isr_i2s_rx_GetState(void);
void isr_i2s_rx_Disable(void);

void isr_i2s_rx_SetPending(void);
void isr_i2s_rx_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the isr_i2s_rx ISR. */
#define isr_i2s_rx_INTC_VECTOR            ((reg32 *) isr_i2s_rx__INTC_VECT)

/* Address of the isr_i2s_rx ISR priority. */
#define isr_i2s_rx_INTC_PRIOR             ((reg8 *) isr_i2s_rx__INTC_PRIOR_REG)

/* Priority of the isr_i2s_rx interrupt. */
#define isr_i2s_rx_INTC_PRIOR_NUMBER      isr_i2s_rx__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable isr_i2s_rx interrupt. */
#define isr_i2s_rx_INTC_SET_EN            ((reg32 *) isr_i2s_rx__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the isr_i2s_rx interrupt. */
#define isr_i2s_rx_INTC_CLR_EN            ((reg32 *) isr_i2s_rx__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the isr_i2s_rx interrupt state to pending. */
#define isr_i2s_rx_INTC_SET_PD            ((reg32 *) isr_i2s_rx__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the isr_i2s_rx interrupt. */
#define isr_i2s_rx_INTC_CLR_PD            ((reg32 *) isr_i2s_rx__INTC_CLR_PD_REG)


#endif /* CY_ISR_isr_i2s_rx_H */


/* [] END OF FILE */
