#ifndef __WKUP_H
#define __WKUP_H
#include "stm32f10x.h"

#define STANDBY_FUNCS_NUM 10

void Toggle_LED_Green(void);
void Register_Standby_Funcs(void (*standby_func)(void));
void Init_LED_Green(void);
void Init_Check_Status(void);
void Init_Water_En(void);
void WKUP_Init(void);
void WKUP_Disable(void);

#endif
