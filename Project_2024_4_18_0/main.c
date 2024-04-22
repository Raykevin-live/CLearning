#include <stdio.h>
#include <math.h>

//从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	printf("请输入三个数:>");
//	scanf("%d%d%d", &a, &b, &c);
//	
//	if(a<b)
//	{
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if(a<c)
//	{
//		tmp = c;
//		c = a;
//		a = tmp;
//	}
//	if(b<c)
//	{
//		tmp = c;
//		c = b;
//		b = tmp;
//	}
//	
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i =1; i<=100; i++)
//	{
//		if(0 == i%3)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("count = %d\n", count);
//	
//	return 0;
//}

//求最大公约数
//辗转相除法
int main()
{
	int mx = 0;
	int mn = 0;
	int r = 0;
	printf("请输入两个数:>");
	scanf("%d%d", &mx, &mn);
	
	//排大小
	if(mx<mn)
	{
		int tmp =mx;
		mx = mn;
		mn = tmp;
	}
	
	while(r = mx%mn)
	{
//		r = mx%mn;//可以直接在判断语句中计算，如果不为0就一直循环
		mx = mn;
		mn = r;
		
		
	}
	
	printf("最大公约数是：%d", mn);
	return 0;	
}


//打印1000-2000之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;//定义到循环体外部
//	
//	for(year = 1000;year<= 2000;year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除
//		//2.能被400整除
//		if((0 == year%4 && 0 != year%100)||(0 == year%400))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n count = %d\n", count);
//	return 0;
//}


//打印100-200之间的素数

//int main()
//{
//	int i = 0;
//	int count = 0;
//	
//	for(i = 101; i <= 200;i+=2)//优化1.偶数一定不是素数
//	{
//		//判断i是否是素数
//		//素数判断的规则
//		//1.试除法
//		//产生2-> i-1
//		int j = 0;
//		for(j=2;j<=sqrt(i);j++)//优化2.一个数的一对因数至少有一个数是小于该数的开平方的
//		{
//			if(0==i%j)
//			{
//				break;
//			}
//		}
//		if(j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\ncount= %d\n", count);
//	return 0;
//	
//}




