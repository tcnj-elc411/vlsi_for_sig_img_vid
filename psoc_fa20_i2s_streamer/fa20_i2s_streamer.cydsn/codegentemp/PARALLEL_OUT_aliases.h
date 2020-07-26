/*******************************************************************************
* File Name: PARALLEL_OUT.h  
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

#if !defined(CY_PINS_PARALLEL_OUT_ALIASES_H) /* Pins PARALLEL_OUT_ALIASES_H */
#define CY_PINS_PARALLEL_OUT_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define PARALLEL_OUT_0			(PARALLEL_OUT__0__PC)
#define PARALLEL_OUT_0_INTR	((uint16)((uint16)0x0001u << PARALLEL_OUT__0__SHIFT))

#define PARALLEL_OUT_1			(PARALLEL_OUT__1__PC)
#define PARALLEL_OUT_1_INTR	((uint16)((uint16)0x0001u << PARALLEL_OUT__1__SHIFT))

#define PARALLEL_OUT_2			(PARALLEL_OUT__2__PC)
#define PARALLEL_OUT_2_INTR	((uint16)((uint16)0x0001u << PARALLEL_OUT__2__SHIFT))

#define PARALLEL_OUT_3			(PARALLEL_OUT__3__PC)
#define PARALLEL_OUT_3_INTR	((uint16)((uint16)0x0001u << PARALLEL_OUT__3__SHIFT))

#define PARALLEL_OUT_4			(PARALLEL_OUT__4__PC)
#define PARALLEL_OUT_4_INTR	((uint16)((uint16)0x0001u << PARALLEL_OUT__4__SHIFT))

#define PARALLEL_OUT_5			(PARALLEL_OUT__5__PC)
#define PARALLEL_OUT_5_INTR	((uint16)((uint16)0x0001u << PARALLEL_OUT__5__SHIFT))

#define PARALLEL_OUT_6			(PARALLEL_OUT__6__PC)
#define PARALLEL_OUT_6_INTR	((uint16)((uint16)0x0001u << PARALLEL_OUT__6__SHIFT))

#define PARALLEL_OUT_7			(PARALLEL_OUT__7__PC)
#define PARALLEL_OUT_7_INTR	((uint16)((uint16)0x0001u << PARALLEL_OUT__7__SHIFT))

#define PARALLEL_OUT_INTR_ALL	 ((uint16)(PARALLEL_OUT_0_INTR| PARALLEL_OUT_1_INTR| PARALLEL_OUT_2_INTR| PARALLEL_OUT_3_INTR| PARALLEL_OUT_4_INTR| PARALLEL_OUT_5_INTR| PARALLEL_OUT_6_INTR| PARALLEL_OUT_7_INTR))

#endif /* End Pins PARALLEL_OUT_ALIASES_H */


/* [] END OF FILE */
