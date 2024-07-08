#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//	//向内存申请10个整型的空间
//	int* p = (int*)malloc(10*sizeof(int));//强制类型改变
//	
//	if( p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for(i = 0; i<10;i++)
//		{
//			*(p+i) = i;
//		}
//		for(i = 0; i<10;i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//	//当动态申请的空间不再使用时
//	//就应该还给系统
//	free(p);
//	p = NULL;
//	
//	return 0;
//}


//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for(i = 0; i<10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//	free(p);
//	p = NULL;
//	
//	return 0;
//}

int main(
{
	int* p = (int*)malloc(20);
	if(p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for(i = 0; i< 5; i++)
		{
			*(p+i) = i;
			
		}
	}
	//使用malloc开辟的20个字节的空间
	//希望能够有40个字节的空间
	//在使用ralloc函数开辟更大的空间
	//realloc使用的注意事项
	//1.如果p指向的空间之后有足够的空间可以追加，，后返回p
	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存空间区域
	//开辟一块满足需求的空间，并且把原来的内存中的数据拷贝回来，释放旧的内存空间
	//最后返回新开辟的内存空间地址
	//3.得用一个新的变量来接收realloc函数的返回值
//	int* p2 = (int*)realloc(p, 40);

	int* ptr = realloc(p, INT_MAX);
	if(ptr != NULL)
	{
		p = ptr;
		int i = 0;
		for(i = 5; i< 10; i++)
		{
			*(p+i) = i;			
		}
		for(i = 0; i< 10;i++)
		{
			printf("%d ", *(p+i));
		}
	}
	
	//释放内存
	free(p);
	p = NULL;
}
