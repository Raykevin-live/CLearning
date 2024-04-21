#include <stdio.h>
#include "add.h"
#include <string.h>

//int main()
//{
//	int a =10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("和为:%d\n", sum);
//	return 0;
//}

void print(int n)
{
	if(n>9)
	{
		print(n/10);
	}
	printf("%d ", n%10);
}

//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//递归
//	print(num);//写一个print函数打印出每一个数位上的数字
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	//计算字符串的长度
//	while(*str != '\0')
//	{
//		count++;
//		str++;  //地址加1
//	}
//	return count;
//}//用不创建新变量的方式

int my_strlen(char* str)
{
	if(*str != '\0')
	{
		return 1+my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
//把大事化小

int main()
{
	char arr[] = "kevin";
	//int len = strlen(arr);
	//printf("%d\n", len);
	int len = my_strlen(arr);
	printf("len = %d\n", len);
	return 0;
}
