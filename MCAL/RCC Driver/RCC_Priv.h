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

// ************************************************************************** //
// ******************************* CR Register ****************************** //
// ************************************************************************** //

#define HSION 0
#define HSIRDY 1
#define CR_RES0 2
#define HSITRIM0 3
#define HSITRIM1 4
#define HSITRIM2 5
#define HSITRIM3 6
#define HSITRIM4 7
#define HSICAL0 8
#define HSICAL1 9
#define HSICAL2 10
#define HSICAL3 11
#define HSICAL4 12
#define HSICAL5 13
#define HSICAL6 14
#define HSICAL7 15
#define HSEON 16
#define HSERDY 17
#define HSEBYP 18
#define CSSON 19
#define CR_RES1 20
#define CR_RES2 21
#define CR_RES3 22
#define CR_RES4 23
#define PLLON 24
#define PLLRDY 25
#define PLLI2SON 26
#define PLLI2SRDY 27
#define CR_RES5 28
#define CR_RES6 29
#define CR_RES7 30
#define CR_RES8 31

// ************************************************************************** //
// **************************** PLLCFGR Register **************************** //
// ************************************************************************** //

#define PLLM0 0
#define PLLM1 1
#define PLLM2 2
#define PLLM3 3
#define PLLM4 4
#define PLLM5 5
#define PLL0 6
#define PLL1 7
#define PLL2 8
#define PLL3 9
#define PLL4 10
#define PLL5 11
#define PLL6 12
#define PLL7 13
#define PLL8 14
#define PLLCFGR_RESERVED0 15
#define PLLP0 16
#define PLLP1 17
#define PLLCFGR_RESERVED1 18
#define PLLCFGR_RESERVED2 19
#define PLLCFGR_RESERVED3 20
#define PLLCFGR_RESERVED4 21
#define PLLSRC 22
#define PLLCFGR_RESERVED5 23
#define PLLQ0 24
#define PLLQ1 25
#define PLLQ2 26
#define PLLQ3 27
#define PLLCFGR_RESERVED6 28
#define PLLCFGR_RESERVED7 29
#define PLLCFGR_RESERVED8 30
#define PLLCFGR_RESERVED9 31

#define RCC ((volatile RCC_MemMapReg_S *)(RCC_BASE_ADDR))

#endif /* End of file RCC_Priv.h */