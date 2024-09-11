#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int Myatoi(const char* str);

//int main()
//{
//	float a, b;
//
//	a = 0.1;
//	b = 0.2;
//	if (fabs(a + b - 0.3) < 0.00001)
//	{
//		printf("相等\n");
//	}
//	else
//	{
//		printf("不相等\n");
//	}
//	
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char buffer[100];
//	printf("Enter A Number:>");
//
//
//	fgets(buffer, 100, stdin);
//
//}
//


int main()
{
	int i;
	char buffer[256];
	printf("Enter a number: ");
	fgets(buffer, 256, stdin);
	i = atoi(buffer);
	printf("The value entered is %d. Its double is %d.\n", i, i * 2);
	return 0;
}

//int main()
//{
//	int i;
//	char ch = 0;
//	
//	scanf("%c", &ch);
//
//	printf("%d", atoi(&ch));
//
//	return 0;
//}

//模拟实现
//1.传入空指针返回0，传入空字符串返回0
//2.消除空字符串
//3.判断符号的正负
//4.读取字符串直到遇到第一个非数字

int Myatoi(const char* str)
{
	//1.传入空指针返回0，传入空字符串返回0
	if (str == NULL || str == '\0')
	{
		return 0;
	}
	//2.消除空字符串
	while(isspace(*str))
	{
		str++;
	}
	//3.判断符号的正负
	//flag=1, 为正，flag=-1，为负
	int flag = 1;
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}

	//4.读取字符串直到遇到第一个非数字
	long long res = 0;
	while (*str != '\0')
	{
		if (isdigit(*str))
		{
			res = res * 10 + (*str - '0') * flag;
			str++;
		}
		else
		{
			return (int)res;
		}

		//判断是否超出int 的范围
		if (res > INT_MAX)
		{
			return INT_MAX;
		}
		else if (res < INT_MIN)
		{
			return INT_MIN;
		}
		
	}
	return (int)res;
}

