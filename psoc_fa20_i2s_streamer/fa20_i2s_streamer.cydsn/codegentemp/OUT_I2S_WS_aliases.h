/*******************************************************************************
* File Name: OUT_I2S_WS.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_OUT_I2S_WS_ALIASES_H) /* Pins OUT_I2S_WS_ALIASES_H */
#define CY_PINS_OUT_I2S_WS_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define OUT_I2S_WS_0			(OUT_I2S_WS__0__PC)
#define OUT_I2S_WS_0_INTR	((uint16)((uint16)0x0001u << OUT_I2S_WS__0__SHIFT))

#define OUT_I2S_WS_INTR_ALL	 ((uint16)(OUT_I2S_WS_0_INTR))

#endif /* End Pins OUT_I2S_WS_ALIASES_H */


/* [] END OF FILE */
