#include "board.h"
#include "stdio.h"
#include "stm32f4xx_hal.h"




int fputc(int ch, FILE *f)
{
	while((DBUG_URAT->SR&0X40)==0);//ѭ������,ֱ���������   
	DBUG_URAT->DR = ch;      
	return ch;
}

































































