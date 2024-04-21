#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++ -- 先使用，再++    同理，前置++，先++，后使用，即：a = 11, b= 11
//	printf("a = %d b = %d\n",a ,b);//a = 11, b= 10
//	
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	printf("%d\n", a);
//	return 0;
//}


//三目运算符
int main()
{
	int a = 100; 
	int b = 20;
	int max = 0;
	
	max = (a > b ? a : b);
	
	printf("%d\n", max);
	return 0;
}
