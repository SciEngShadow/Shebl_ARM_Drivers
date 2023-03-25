/*
 * Filename: RCC_Priv.h
 * Path: d:\ARM Workspace\Repo\Shebl_ARM_Drivers\MCAL\RCC Driver
 * Created Date: Saturday, March 25th 2023, 7:46:49 pm
 * Author: Mohamed
 *
 * Copyright (c) 2023 IMT School, ARM Course
 */

#ifndef RCC_PRIV_H_
#define RCC_PRIV_H_

// ************************************************************************** //
// ******************************** Includes ******************************** //
// ************************************************************************** //

#include "../../Libraries/Std_Types.h"

// ************************************************************************** //
// ****************************** RCC registers ***************************** //
// ************************************************************************** //

#define RCC_BASE_ADDR 0x40023800

typedef struct RCC_Regs
{
    uint32 CR;
    uint32 PLLCFGR;
    uint32 CFGR;
    uint32 CIR;
    uint32 AHB1RSTR;
    uint32 AHB2RSTR;
    uint32 RESERVED1;
    uint32 RESERVED2;
    uint32 APB1RSTR;
    uint32 ABP2RSTR;
    uint32 RESERVED3;
    uint32 RESERVED4;
    uint32 AHB1ENR;
    uint32 AHB2ENR;
    uint32 RESERVED5;
    uint32 RESERVED6;
    uint32 APB1ENR;
    uint32 APB2ENR;
    uint32 RESERVED7;
    uint32 RESERVED8;
    uint32 AHB1LPENR;
    uint32 AHB2LPENR;
    uint32 RESERVED9;
    uint32 RESERVED10;
    uint32 APB1LPENR;
    uint32 APB2LPENR;
    uint32 RESERVED11;
    uint32 RESERVED12;
    uint32 BDCR;
    uint32 CSR;
    uint32 RESERVED13;
    uint32 RESERVED14;
    uint32 SSCGR;
    uint32 PLLI2SCFGR;
    uint32 RESERVED15;
    uint32 DCKCFGR;
} RCC_MemMapReg_S;

#define RCC ((volatile RCC_MemMap_t *)(RCC_BASE_ADDR))

#endif
/* End of file RCC_Priv.h */