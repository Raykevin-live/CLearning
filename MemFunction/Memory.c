#define _CRT_SECURE_NO_WARNINGS 1
#include "Memory.h"


void* MyMemcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);

	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest+1;
		src = (char*)src + 1;
	}
	return ret;
}

void* MyMemmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);

	void* ret = dest;
	if (dest < src)
	{
		//ǰ->��
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//��->ǰ
		while (num--)
		{
			//num�Ѿ���һ
			*((char*)dest+num) = *((char*)src+num);
		}
	}
	return ret;
}




