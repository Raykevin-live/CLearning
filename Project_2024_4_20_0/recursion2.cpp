#include <stdio.h>


//求阶乘
//int Factorial(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for(i = 1;i<=n;i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}


//递归法
int Factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	return n*Factorial(n-1);
}


//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Factorial(n);
//	printf("%d\n", ret);
//	return 0;
//}





//求第n个斐波那契数(Fibonacci)

int Fibonacci1(int n)
{
	if(n<=2)
	{
		return 1;
	}
	return Fibonacci1(n-2)+Fibonacci1(n-1);
}//递归，但是可能出现栈溢出，运算速度太慢

int Fibonacci2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while(n>2)
	{
		c = a+b;
		a = b ;
		b = c;
		n--;
	}
	return c;
}


int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fibonacci1(n);
	printf("ret = %d\n", ret);
	return 0;
}


