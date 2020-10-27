#ifndef __BSP_TIMEBASE_H
#define __BSP_TIMEBASE_H


#include "stm32f10x.h"


/********************定时器TIM参数定义***********/

#define            TIM                   TIM3
#define            TIM_APBxClock_FUN     RCC_APB1PeriphClockCmd
#define            TIM_CLK               RCC_APB1Periph_TIM3
// #define            TIM_Period            1000-1
// #define            TIM_Prescaler         71
#define            TIM_IRQ               TIM3_IRQn
#define            TIM_IRQHandler        TIM3_IRQHandler


/**************************外部变量********************************/
extern __IO uint64_t time;
/**************************函数声明********************************/

void TIM_Init(uint16_t arr, uint16_t psc);


#endif	/* __BSP_TIMEBASE_H */


