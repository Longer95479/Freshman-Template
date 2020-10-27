#ifndef _LED_H_
#define _LED_H_

#include "stm32f10x.h"  

//用枚举体进行封装
typedef enum 
{
	LED1,
	LED2,
	LED3,
	LED_ALL
}LED;

extern void Led_Init(LED Led);
extern void Led_Set(LED Led, uint8_t State);

#endif
