#define _CRT_SECURE_NO_WARNINGS 1
#include "String.h"


//strlen 函数
//1.递归
size_t MyStrlen(const char* str)
{
	assert(str);
	if (*str == 0)
	{
		return 0;
	}
	else
	{
		return MyStrlen(str + 1) + 1;
	}
}

//2.计数器
//size_t MyStrlen(const char* str)
//{
//  assert(str);
//	size_t count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//3.指针-指针
//size_t MyStrlen(const char* str)
//{
//	assert(str);
//	char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}


//strcpy 函数
char* MyStrcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}

//strcat 函数
char* MyStrcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;

	// 找尾
	while (*dest != '\0')
	{
		dest++;
	}
	//拷贝数据
	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}

//strcmp 函数
int MyStrcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);

	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return *str1;
		}
		str1++;
		str2++;
	}

	return *str1 - *str2;
}

const char* MyStrstr(const char* str1, const char* str2)
{
	assert(str1 && str2);

	const char* s1 = str1;
	const char* s2 = str2;

	const char* cur = str1;//cur标记可能匹配到的位置
	if (*str2 == '\0')
	{
		return str1;
	}

	while (*cur)
	{
		s1 = cur;
		s2 = str2;

		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}

		if (*s2 == '\0')
		{
			return cur;
		}

		cur++;
	}
	return NULL;
}

