#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		if (arr[0] < arr[i])
//		{
//			arr[0] = arr[i];
//		}
//	}
//	printf("max = %d\n", arr[0]);
//
//	return 0;
//}


//1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100
int main()
{	
	float sum = 0.0;
	int sign = 1;

	for (int i = 1; i <= 100; i++)
	{
		sum +=  sign* 1.0/ i;
		sign = -sign;
	}

	printf("%f\n", sum);

	return 0;
}


//编写程序数一下 1到 100 的所有整数中出现多少个数字9

//int main()
//{
//	int cnt = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		
//		if (i % 10 == 9)
//		{
//			++cnt;
//		}	
//		
//		if (i / 10 == 9)
//		{
//			++cnt;
//		}		
//	}
//	printf("%d\n", cnt);
//
//	return 0;
//}

//写一个代码：打印100~200之间的素数
//int main()
//{
//	int cnt = 0;
//	for (int i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}			
//		}
//		if (j > sqrt(i))
//		{
//			cnt++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\n");
//	printf("count = %d\n", cnt);
//	return 0;
//}