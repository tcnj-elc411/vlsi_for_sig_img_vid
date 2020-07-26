/*******************************************************************************
* File Name: PARALLEL_OUT.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_PARALLEL_OUT_H) /* Pins PARALLEL_OUT_H */
#define CY_PINS_PARALLEL_OUT_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "PARALLEL_OUT_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 PARALLEL_OUT__PORT == 15 && ((PARALLEL_OUT__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    PARALLEL_OUT_Write(uint8 value);
void    PARALLEL_OUT_SetDriveMode(uint8 mode);
uint8   PARALLEL_OUT_ReadDataReg(void);
uint8   PARALLEL_OUT_Read(void);
void    PARALLEL_OUT_SetInterruptMode(uint16 position, uint16 mode);
uint8   PARALLEL_OUT_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the PARALLEL_OUT_SetDriveMode() function.
     *  @{
     */
        #define PARALLEL_OUT_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define PARALLEL_OUT_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define PARALLEL_OUT_DM_RES_UP          PIN_DM_RES_UP
        #define PARALLEL_OUT_DM_RES_DWN         PIN_DM_RES_DWN
        #define PARALLEL_OUT_DM_OD_LO           PIN_DM_OD_LO
        #define PARALLEL_OUT_DM_OD_HI           PIN_DM_OD_HI
        #define PARALLEL_OUT_DM_STRONG          PIN_DM_STRONG
        #define PARALLEL_OUT_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define PARALLEL_OUT_MASK               PARALLEL_OUT__MASK
#define PARALLEL_OUT_SHIFT              PARALLEL_OUT__SHIFT
#define PARALLEL_OUT_WIDTH              8u

/* Interrupt constants */
#if defined(PARALLEL_OUT__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in PARALLEL_OUT_SetInterruptMode() function.
     *  @{
     */
        #define PARALLEL_OUT_INTR_NONE      (uint16)(0x0000u)
        #define PARALLEL_OUT_INTR_RISING    (uint16)(0x0001u)
        #define PARALLEL_OUT_INTR_FALLING   (uint16)(0x0002u)
        #define PARALLEL_OUT_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define PARALLEL_OUT_INTR_MASK      (0x01u) 
#endif /* (PARALLEL_OUT__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define PARALLEL_OUT_PS                     (* (reg8 *) PARALLEL_OUT__PS)
/* Data Register */
#define PARALLEL_OUT_DR                     (* (reg8 *) PARALLEL_OUT__DR)
/* Port Number */
#define PARALLEL_OUT_PRT_NUM                (* (reg8 *) PARALLEL_OUT__PRT) 
/* Connect to Analog Globals */                                                  
#define PARALLEL_OUT_AG                     (* (reg8 *) PARALLEL_OUT__AG)                       
/* Analog MUX bux enable */
#define PARALLEL_OUT_AMUX                   (* (reg8 *) PARALLEL_OUT__AMUX) 
/* Bidirectional Enable */                                                        
#define PARALLEL_OUT_BIE                    (* (reg8 *) PARALLEL_OUT__BIE)
/* Bit-mask for Aliased Register Access */
#define PARALLEL_OUT_BIT_MASK               (* (reg8 *) PARALLEL_OUT__BIT_MASK)
/* Bypass Enable */
#define PARALLEL_OUT_BYP                    (* (reg8 *) PARALLEL_OUT__BYP)
/* Port wide control signals */                                                   
#define PARALLEL_OUT_CTL                    (* (reg8 *) PARALLEL_OUT__CTL)
/* Drive Modes */
#define PARALLEL_OUT_DM0                    (* (reg8 *) PARALLEL_OUT__DM0) 
#define PARALLEL_OUT_DM1                    (* (reg8 *) PARALLEL_OUT__DM1)
#define PARALLEL_OUT_DM2                    (* (reg8 *) PARALLEL_OUT__DM2) 
/* Input Buffer Disable Override */
#define PARALLEL_OUT_INP_DIS                (* (reg8 *) PARALLEL_OUT__INP_DIS)
/* LCD Common or Segment Drive */
#define PARALLEL_OUT_LCD_COM_SEG            (* (reg8 *) PARALLEL_OUT__LCD_COM_SEG)
/* Enable Segment LCD */
#define PARALLEL_OUT_LCD_EN                 (* (reg8 *) PARALLEL_OUT__LCD_EN)
/* Slew Rate Control */
#define PARALLEL_OUT_SLW                    (* (reg8 *) PARALLEL_OUT__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define PARALLEL_OUT_PRTDSI__CAPS_SEL       (* (reg8 *) PARALLEL_OUT__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define PARALLEL_OUT_PRTDSI__DBL_SYNC_IN    (* (reg8 *) PARALLEL_OUT__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define PARALLEL_OUT_PRTDSI__OE_SEL0        (* (reg8 *) PARALLEL_OUT__PRTDSI__OE_SEL0) 
#define PARALLEL_OUT_PRTDSI__OE_SEL1        (* (reg8 *) PARALLEL_OUT__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define PARALLEL_OUT_PRTDSI__OUT_SEL0       (* (reg8 *) PARALLEL_OUT__PRTDSI__OUT_SEL0) 
#define PARALLEL_OUT_PRTDSI__OUT_SEL1       (* (reg8 *) PARALLEL_OUT__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define PARALLEL_OUT_PRTDSI__SYNC_OUT       (* (reg8 *) PARALLEL_OUT__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(PARALLEL_OUT__SIO_CFG)
    #define PARALLEL_OUT_SIO_HYST_EN        (* (reg8 *) PARALLEL_OUT__SIO_HYST_EN)
    #define PARALLEL_OUT_SIO_REG_HIFREQ     (* (reg8 *) PARALLEL_OUT__SIO_REG_HIFREQ)
    #define PARALLEL_OUT_SIO_CFG            (* (reg8 *) PARALLEL_OUT__SIO_CFG)
    #define PARALLEL_OUT_SIO_DIFF           (* (reg8 *) PARALLEL_OUT__SIO_DIFF)
#endif /* (PARALLEL_OUT__SIO_CFG) */

/* Interrupt Registers */
#if defined(PARALLEL_OUT__INTSTAT)
    #define PARALLEL_OUT_INTSTAT            (* (reg8 *) PARALLEL_OUT__INTSTAT)
    #define PARALLEL_OUT_SNAP               (* (reg8 *) PARALLEL_OUT__SNAP)
    
	#define PARALLEL_OUT_0_INTTYPE_REG 		(* (reg8 *) PARALLEL_OUT__0__INTTYPE)
	#define PARALLEL_OUT_1_INTTYPE_REG 		(* (reg8 *) PARALLEL_OUT__1__INTTYPE)
	#define PARALLEL_OUT_2_INTTYPE_REG 		(* (reg8 *) PARALLEL_OUT__2__INTTYPE)
	#define PARALLEL_OUT_3_INTTYPE_REG 		(* (reg8 *) PARALLEL_OUT__3__INTTYPE)
	#define PARALLEL_OUT_4_INTTYPE_REG 		(* (reg8 *) PARALLEL_OUT__4__INTTYPE)
	#define PARALLEL_OUT_5_INTTYPE_REG 		(* (reg8 *) PARALLEL_OUT__5__INTTYPE)
	#define PARALLEL_OUT_6_INTTYPE_REG 		(* (reg8 *) PARALLEL_OUT__6__INTTYPE)
	#define PARALLEL_OUT_7_INTTYPE_REG 		(* (reg8 *) PARALLEL_OUT__7__INTTYPE)
#endif /* (PARALLEL_OUT__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_PARALLEL_OUT_H */


/* [] END OF FILE */
