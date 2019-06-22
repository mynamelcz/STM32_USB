#include "board.h"
#include "stdio.h"
#include "stm32f4xx_hal.h"




int fputc(int ch, FILE *f)
{
	while((DBUG_URAT->SR&0X40)==0);//循环发送,直到发送完毕   
	DBUG_URAT->DR = ch;      
	return ch;
}

































































