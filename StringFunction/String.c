#define _CRT_SECURE_NO_WARNINGS 1
#include "String.h"


//strlen ����
//1.�ݹ�
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

//2.������
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

//3.ָ��-ָ��
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


//strcpy ����
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

//strcat ����
char* MyStrcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;

	// ��β
	while (*dest != '\0')
	{
		dest++;
	}
	//��������
	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}

//strcmp ����
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

	const char* cur = str1;//cur��ǿ���ƥ�䵽��λ��
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

