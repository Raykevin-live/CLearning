#include <stdio.h>

//数一下1到100所有的整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i= 1;i <= 100;i++)
//	{
//		if(9==i%10)
//		{
//			count++;
//		}
//		if(9 == i/10)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//分数求和：1/1-1/2+1/3...+1/99-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;//注意算出的结果应为小数
//	int flag = 1;//符号
//	for(i =1;i <= 100;i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求最大值
//int main()
//{
//	int i = 0;
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,-1};
//	int max = arr[0];//初值应该赋入数组中的值，否则元素都比初值小时，就会出现错误
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for(i =0; i<sz; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	
//	
//	return 0;
//}



//在屏幕上输出9*9乘法表
int main()
{
	int i = 0;
	//确定打印9行
	for(i = 1; i<= 9; i++)
	{
		//打印一行
		int j = 1;
		for(j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i*j);//%2d -- 补足两位数，不足的地方用空格补齐，右对其；%-2d左对齐
		}
		printf("\n");//换行
	}
	
	return 0;
}

