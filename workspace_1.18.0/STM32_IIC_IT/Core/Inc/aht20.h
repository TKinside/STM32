/*
 * aht20.h
 *
 *  Created on: Mar 23, 2025
 *      Author: tKinsde
 */

#ifndef INC_AHT20_H_
#define INC_AHT20_H_

#include "i2c.h"
#include "stm32f1xx_hal_i2c.h"
enum AHT20_State
{
    INIT=0,
    MEASURING,
    MEASURE_DONE,
    GETTING,
    GET_DONE,
    READY,
    FREE

};
volatile extern enum AHT20_State AHT20_STATE;
void AHT20_Init();
void AHT20_Measure();
void AHT20_Get(float *Temperature, float *Humidity);
void HAL_I2C_MasterTxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MasterRxCpltCallback(I2C_HandleTypeDef *hi2c);


#endif /* INC_AHT20_H_ */
