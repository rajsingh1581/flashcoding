/*
 * flash.h
 *
 *  Created on: 29-Sep-2020
 *      Author: rajws
 */

#ifndef FLASH_H_
#define FLASH_H_

#include "stm32f4xx_hal.h"

	//Typedefs
	//1. data size
	typedef enum
	{
		DATA_TYPE_8=0,
		DATA_TYPE_16,
		DATA_TYPE_32,
	}DataTypeDef;

	//functions prototypes
	//1. Erase Sector
	static void MY_FLASH_EraseSector(void);

	//2. Set Sector Adress
	void MY_FLASH_SetSectorAddrs(uint8_t sector, uint32_t addrs);
	//3. Write Flash
	void MY_FLASH_WriteN(uint32_t idx, void *wrBuf, uint32_t Nsize, DataTypeDef dataType);

#endif /* FLASH_H_ */
