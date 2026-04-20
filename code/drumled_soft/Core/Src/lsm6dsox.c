#include "lsm6dsox.h"
#include <stdio.h>

void LSM6DSOX_Init(I2C_HandleTypeDef *hi2c)
{
    uint8_t data;

    // Configure accéléromètre : 104 Hz, ±2g
    data = 0x40;
    HAL_I2C_Mem_Write(hi2c, LSM6DSOX_ADDR, CTRL1_XL, 1, &data, 1, HAL_MAX_DELAY);
}

void LSM6DSOX_ReadAccel(I2C_HandleTypeDef *hi2c, AccelData_t *accel)
{
    uint8_t buffer[6];

    HAL_I2C_Mem_Read(hi2c, LSM6DSOX_ADDR, OUTX_L_A, 1, buffer, 6, HAL_MAX_DELAY);

    accel->x = (int16_t)(buffer[1] << 8 | buffer[0]);
    accel->y = (int16_t)(buffer[3] << 8 | buffer[2]);
    accel->z = (int16_t)(buffer[5] << 8 | buffer[4]);
}

int LSM6DSOX_DetectShock(AccelData_t *accel)
{
    int32_t magnitude;

    // Approximation de la norme (sans sqrt pour aller vite)
    magnitude = abs(accel->x) + abs(accel->y) + abs(accel->z);

    if (magnitude > SEUIL)
        return 1;
    else
        return 0;
}
