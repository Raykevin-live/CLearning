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
//	printf("��%d��쳲���������%d\n", n, ret);
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
//	printf("����%d��̨����%d������\n", n, ret);
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


//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

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
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19

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


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

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
//	printf("%d�Ľ׳���%d\n", n, ret);
//
//	return 0;
//}


//��һ�����������У�ֻ��һ�����ֳ���һ�Σ��������鶼�ǳɶԳ��ֵģ����ҳ��Ǹ�ֻ����һ�ε����֡�
//
//���磺
//
//�������У�1 2 3 4 5 1 2 3 4��ֻ��5����һ�Σ��������ֶ�����2�Σ��ҳ�5

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



//����������ʱ������������������������

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("Before: a=%d, b=%d\n", a, b);
//
//	//����
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//			
//	printf("After: a=%d, b=%d\n", a, b);
//
//
//	return 0;
//}



//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

//void PrintBin(int n)
//{
//	//��ӡ����λ
//	printf("����λ:");
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		int ret = (n >> i) & 1;
//		printf("%d", ret);
//	}
//	printf("\n");
//
//	//��ӡż��λ
//	printf("ż��λ:");
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



//ʵ��һ�����������������ַ����е�k���ַ���

//���磺

//ABCD����һ���ַ��õ�BCDA
//
//ABCD���������ַ��õ�CDAB

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
