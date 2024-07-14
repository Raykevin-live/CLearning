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
		*(char*)dest = *(char*)src;//一个一个字节拷贝
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
			*(char*)dest = *(char*)src;//一个一个字节拷贝
			dest = (char*)dest + 1;
			src = (char*)src + 1;//++优先级高，所以改成前置++，先转换再++.
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

//c语言规定memcpy  只要处理 不重叠的内存拷贝就可以，但是有些编译器下memcpy也可以解决重叠内存问题
//memmove 处理重叠内存的拷贝

int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[5] = {0};
	my_memcpy(arr1, arr2, sizeof(arr1));
	
//	struct s arr3[] = {{"张三", 20}, {"李四", 30}};
//	struct s arr4[] = {0};
//	memcpy(arr3, arr4, sizeof(arr3));
	
	struct s arr3[] = {{"张三", 20}, {"李四", 30}};
	struct s arr4[] = {0};
	my_memcpy(arr3, arr4, sizeof(arr3));

	return 0;
}
