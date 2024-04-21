#include <stdio.h>

//1.#define 定义标识符常量
//#define MAX 100

//int main()
//{
//	int a = MAX;
//	return 0;
//}

//2.#define 定义宏 - 带参数
//宏与函数的区别

//函数的实现
int MAX(int x, int y)
{
	if(x > y)
		return x;
	else
		return y;
}

//宏的方式
#define MAX(X, Y) (X>Y?X:Y)

int main()
{
	int a = 10;
	int b = 20;
	//函数
	int max = MAX(a, b);
	printf("max = %d\n", max);
	//宏的方式
	max = MAX(a, b);
	//max = (a>b?a:b)
	printf("max = %d\n", max);
	
	return 0;
}



