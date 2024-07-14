#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>


void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while(num--)
	{
		*(char*)dest = *(char*)src;//һ��һ���ֽڿ���
	dest = (char*)dest+ 1;
	src = (char*)src + 1;
	}
	return ret;
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	
	assert(dest && src);
	
	if(dest < src)
	{
		while(num--)
		{
			*(char*)dest = *(char*)src;//һ��һ���ֽڿ���
			dest = (char*)dest + 1;
			src = (char*)src + 1;//++���ȼ��ߣ����Ըĳ�ǰ��++����ת����++.
		}
	}
	else
	{
		while(num--)
		{
			*((char*)dest + num)= *((char*)src + num);			
		}
	}
	
	return ret;
}

struct s
{
	char name[20];
	int age;
};

//c���Թ涨memcpy  ֻҪ���� ���ص����ڴ濽���Ϳ��ԣ�������Щ��������memcpyҲ���Խ���ص��ڴ�����
//memmove �����ص��ڴ�Ŀ���

int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[5] = {0};
	my_memcpy(arr1, arr2, sizeof(arr1));
	
//	struct s arr3[] = {{"����", 20}, {"����", 30}};
//	struct s arr4[] = {0};
//	memcpy(arr3, arr4, sizeof(arr3));
	
	struct s arr3[] = {{"����", 20}, {"����", 30}};
	struct s arr4[] = {0};
	my_memcpy(arr3, arr4, sizeof(arr3));

	return 0;
}
