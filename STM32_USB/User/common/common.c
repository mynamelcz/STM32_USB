#include "common.h"





void sys_delay_us(u32 us)
{
	while(us--);
}


void print_code_version(void)
{
	;
}


void my_memcpy(char *tar, const char *src, u32 len)
{
	ASSERT(tar);
	ASSERT(src);
	while(len--)
		*tar++ = *src++;
}

 
#ifdef __ASSERT_PARAM
void assert_fail(u8* file, u32 line)
{
	DBUG_Printf("[assert_fail] __file:%s ;__line:%d\n",file,line); 
	while(1);
}
#endif















