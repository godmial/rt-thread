/*
 * Copyright (c) 2006-2023, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-08-20     BruceOu      first implementation
 * 2023-03-05     yuanzihao    change the LED pins
 */

#include <stdio.h>
#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>

/* defined the LED1 pin: PE3 */
#define LED1_PIN GET_PIN(E, 3)

int main(void)
{
    int count = 1;

  

    return RT_EOK;
}
