#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Print(int n)
{
	if (n < 10)
	{
		printf("%d ", n);
	}
	else
	{
		Print(n / 10);
		Print(n % 10);
	}

}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}


//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//	printf("第%d个斐波那契数是%d\n", n, ret);
//
//	return 0;
//}

int Forg(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return Forg(n - 1) + Forg(n - 2);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int ret = Forg(n);
	printf("跳第%d阶台阶有%d种跳法\n", n, ret);

	return 0;
}