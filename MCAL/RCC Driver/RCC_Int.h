/*
 * Filename: RCC_Int.h
 * Path: d:\ARM Workspace\Repo\Shebl_ARM_Drivers\MCAL\RCC Driver
 * Created Date: Saturday, March 25th 2023, 7:47:24 pm
 * Author: Mohamed
 *
 * Copyright (c) 2023 IMT School, ARM Course
 */

#ifndef RCC_INT_H_
#define RCC_INT_H_

// ************************************************************************** //
// ******************************** Includes ******************************** //
// ************************************************************************** //

#include "../../Libraries/Std_Types.h"

// ************************************************************************** //
// *************************** Function Prototypes ************************** //
// ************************************************************************** //

/**
 * Description: Function to initialize RCC Driver
 * @param  {void} undefined :
 */
void RCC_Initilization(void);

/**
 * Description: Function to Enable Clock of Peripheral
 * @param  {uint32} Reg  :
 * @param  {uint8} BitNo :
 */
void RCC_EnablePeripheralClock(uint32 Reg, uint8 BitNo);

/**
 * Description: Function to Disable Clock of Peripheral
 * @param  {uint32} Reg  :
 * @param  {uint8} BitNo :
 */
void RCC_DisablePeripheralClock(uint32 Reg, uint8 BitNo);

#endif /* End of file RCC_Int.h */