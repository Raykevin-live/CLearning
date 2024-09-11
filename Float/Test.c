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
//		printf("���\n");
//	}
//	else
//	{
//		printf("�����\n");
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

//ģ��ʵ��
//1.�����ָ�뷵��0��������ַ�������0
//2.�������ַ���
//3.�жϷ��ŵ�����
//4.��ȡ�ַ���ֱ��������һ��������

int Myatoi(const char* str)
{
	//1.�����ָ�뷵��0��������ַ�������0
	if (str == NULL || str == '\0')
	{
		return 0;
	}
	//2.�������ַ���
	while(isspace(*str))
	{
		str++;
	}
	//3.�жϷ��ŵ�����
	//flag=1, Ϊ����flag=-1��Ϊ��
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

	//4.��ȡ�ַ���ֱ��������һ��������
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

		//�ж��Ƿ񳬳�int �ķ�Χ
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

