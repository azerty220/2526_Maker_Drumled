#ifndef __LSM6DSOX_H
#define __LSM6DSOX_H

#include "stm32g4xx_hal.h"

#define LSM6DSOX_ADDR (0x6A << 1) // adresse I2C (SA0 = GND)
#define WHO_AM_I_REG 0x0F
#define CTRL1_XL 0x10
#define OUTX_L_A 0x28

#define SEUIL 15000

typedef struct {
    int16_t x;
    int16_t y;
    int16_t z;
} AccelData_t;

void LSM6DSOX_Init(I2C_HandleTypeDef *hi2c);
void LSM6DSOX_ReadAccel(I2C_HandleTypeDef *hi2c, AccelData_t *accel);
int LSM6DSOX_DetectShock(AccelData_t *accel);

#endif
