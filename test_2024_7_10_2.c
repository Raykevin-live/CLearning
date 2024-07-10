#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//预处理指令

//define 定义标识符
//#define MAX 100
#define STR "hehe"
#define reg register
#define do_forever for(;;) //死循环

//define 定义宏
#define SQUARE(X) (X)*(X)

//int main()
//{
//	
//	int ret = SQUARE(5);
//	printf("%d\n", ret);
//	
//	return 0;
//}

#define PRINT(X) printf("the value of "#X" is %d\n", X)

//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of ""a"" is %d\n", a);//多个""出现在printf函数中会自动将字符连在一起
//	PRINT(b);
//	//printf("the value of ""b"" is %d\n", b);
//	return 0;
//}

#define CAT(X, Y) X##Y

//int main()
//{
//	int Class84 = 2020;
//	printf("%d\n", CAT(Class, 84));
//	//printf("%d\n", Class##84);
//	//printf("%d\n", , Class84);
//	return 0;
//}

//函数
int Max(int x, int y)
{
	return (x>y?x:y);
}
//宏
#define MAX(X, Y) ((X)>(Y)?(X):(Y))

//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	//函数在调用的时候，会有函数调用和返回的开销
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏在预处理阶段就完成了替换
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//宏参数传递类型
#define SIZEOF(type) sizeof(type)

//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);
//	return 0;
//}

//宏传递参数的应用
#define MALLOC(num, type) (type*)malloc(num*sizeof(type))

//int main()
//{
////	int* p = (int*)malloc(10*sizeof(int));
//	int* p = MALLOC(10, int);
//	//int* p = (int*)malloc(10*sizeof(int));
//	return 0;
//}


#define DEBUG
//条件编译
int main()
{
//#if defined(DEBUG)
#ifdef DEBUG 
	printf("hehe\n");
#endif
	return 0;
}





//预定义符号
//int main()
//{
//	printf("%s\n", __FILE__);//代码所在路径
//	printf("%d\n", __LINE__);//代码所在的行号
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%d\n", __STDC__);
//	
//	//写日志文件
//	int i = 0;
//	int arr[10] = {0};
//	FILE* pf = fopen("log.txt", "w");
//	for(i = 0; i< 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	
//	fclose(pf);
//	pf = NULL;
//	
//	for(i = 0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	
//	return 0;
//}
