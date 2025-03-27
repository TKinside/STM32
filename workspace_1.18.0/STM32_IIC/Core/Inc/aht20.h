/*
 * aht20.h
 *
 *  Created on: Mar 23, 2025
 *      Author: tKinsde
 */

#ifndef INC_AHT20_H_
#define INC_AHT20_H_

#include "i2c.h"

void AHT20_Init();
void AHT20_Read(float *Temperature,float *Humidity);

#endif /* INC_AHT20_H_ */
