#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void Print(int n)
//{
//	if (n < 10)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		Print(n / 10);
//		Print(n % 10);
//	}
//}
//
//
//
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


//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n>2 )
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
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







//int Forg(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return Forg(n - 1) + Forg(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Forg(n);
//	printf("跳第%d阶台阶有%d种跳法\n", n, ret);
//
//	return 0;
//}




//void Move(char begin, char end)
//{
//	printf("%c->%c ", begin, end);
//}
//
//void Hanio(int n, char begin, char tmp, char end)
//{
//	if (n == 1)
//	{
//		Move(begin, end);
//	}
//	else
//	{
//		Hanio(n - 1, begin, end, tmp);
//		Move(begin, end);
//		Hanio(n - 1, tmp, begin, end);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	Hanio(n, 'A', 'B', 'C');
//	return 0;
//}


//编写一个函数实现n的k次方，使用递归实现。

//int Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return Pow(n, k - 1) * n;
//	}
//}
//
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = Pow(n, k);
//
//	printf("%d\n", ret);
//	return 0;
//}


//
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19

//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//int Fac(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fac(n - 1) * n;
//	}
//}

//int Fac(int n)
//{
//	int fac = 1;
//	while (n > 0)
//	{
//		fac *= n;
//		n--;
//	}
//
//	return fac;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d的阶乘是%d\n", n, ret);
//
//	return 0;
//}


//在一个整型数组中，只有一个数字出现一次，其他数组都是成对出现的，请找出那个只出现一次的数字。
//
//例如：
//
//数组中有：1 2 3 4 5 1 2 3 4，只有5出现一次，其他数字都出现2次，找出5

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int single = 0;
//
//	for (int i = 0; i < sz; i++)
//	{
//		single ^= arr[i];
//	}
//	printf("%d\n", single);
//	return 0;
//}



//不允许创建临时变量，交换两个整数的内容

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("Before: a=%d, b=%d\n", a, b);
//
//	//交换
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//			
//	printf("After: a=%d, b=%d\n", a, b);
//
//
//	return 0;
//}



//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//void PrintBin(int n)
//{
//	//打印奇数位
//	printf("奇数位:");
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		int ret = (n >> i) & 1;
//		printf("%d", ret);
//	}
//	printf("\n");
//
//	//打印偶数位
//	printf("偶数位:");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		int ret = (n >> i) & 1;
//		printf("%d", ret);
//	}
//	printf("\n");
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	PrintBin(n);
//
//	return 0;
//}



//实现一个函数，可以左旋字符串中的k个字符。

//例如：

//ABCD左旋一个字符得到BCDA
//
//ABCD左旋两个字符得到CDAB

#include <assert.h>

void Reverse(char arr[], int begin, int end)
{
	assert(arr);
	while (begin < end)
	{
		char tmp = arr[begin];
		arr[begin] = arr[end];
		arr[end] = tmp;
		begin++;
		end--;
	}

}

void LeftMove(char arr[], int n)
{
	assert(arr);
	int len = strlen(arr);

	Reverse(arr, 0, n-1);
	Reverse(arr, n, len - 1);
	Reverse(arr, 0, len - 1);
}

int main()
{
	char arr[] = "ABCD";
	int k = 0;
	scanf("%d", &k);

	LeftMove(arr, k);

	int len = strlen(arr);
	for (int i = 0; i < len; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");

	return 0;
}
