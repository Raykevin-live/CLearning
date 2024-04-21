#include <stdio.h>
#include <math.h>

//写一个函数可以找出两个数的较大值
int get_max(int x, int y)
{
	if(x<y)
		return y;
	else 
		return x;
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("较大值是:%d\n", max);
//	return 0;
//}

void swap1(int x, int y)
{
	x = x^y;
	y = x^y;
	x = x^y;//无法传参，只在函数内部有用，没有与a，b建立联系
}

void swap2(int* pa, int* pb)
{
	*pa = (*pa)^(*pb);
	*pb = (*pa)^(*pb);
	*pa = (*pa)^(*pb);//传入地址，建立联系，指针计算时需要加括号
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	
////	swap1(a, b);
//	swap2(&a, &b);
//	
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}


//找出素数的函数
int is_prime(int n)
{
	int j = 0;
	for(j =2;j<=sqrt(n);j++)//注意此处优化时要改为"<="
	{
		if(n%j == 0)
		{
			return 0;//	break,return 0 .可以直接结束函数，比break更强
		}
	}
	
	return 1;//只有走完循环才可以走到这里，不用判断
		
}

int main()
{
	int i = 0;
	int count = 0;
	for(i=101;i<=200;i+=2)
	{
		if(	1 == is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}
