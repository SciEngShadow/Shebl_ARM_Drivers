/*
 * Filename: RCC_Prg.c
 * Path: d:\ARM Workspace\Repo\Shebl_ARM_Drivers\MCAL\RCC Driver
 * Created Date: Saturday, March 25th 2023, 7:46:30 pm
 * Author: Mohamed
 *
 * Copyright (c) 2023 IMT School, ARM Course
 */

/* ************************************************************************** */
/* ******************************** Includes ******************************** */
/* ************************************************************************** */
#include "RCC_Priv.h"
#include "RCC_Cfg.h"
#include "RCC_Int.h"
#include "../../Libraries/Common_Macros.h"

/* ************************************************************************** */
/* ************************** Function Definitions ************************** */
/* ************************************************************************** */

/**
 * Description: Function to initialize RCC Driver
 * @param  {void} undefined :
 */
void RCC_Initilization(void)
{
    /* 1- CSS (ON/OFF) */
    /* 2- HSE_BYP */
    /* 3- select clock switch (HSI/HSE/PLL) */
    /* 4- Bus prescalers */
    /* 5- PLL configuration */
    /* 6- Enable* the selected clock (HSI ON / HSE ON / PLL ON ) */
}

/**
 * Description: Function to Enable Clock of Peripheral
 * @param  {uint32} Reg  :
 * @param  {uint8} BitNo :
 */
void RCC_EnablePeripheralClock(uint32 Reg, uint8 BitNo)
{
    switch (Reg)
    {
    case /* constant-expression */:
        /* code */
        break;

    default:
        break;
    }
}

/**
 * Description: Function to Disable Clock of Peripheral
 * @param  {uint32} Reg  :
 * @param  {uint8} BitNo :
 */
void RCC_DisablePeripheralClock(uint32 Reg, uint8 BitNo)
{
    switch (Reg)
    {
    case /* constant-expression */:
        /* code */
        break;

    default:
        break;
    }
}