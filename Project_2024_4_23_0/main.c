#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}


//指针解引用操作
//int main()
//{
//	int a = 0x11223344;//两个十六进制位占一个字节
//	int* pa = &a;
//	*pa = 0;
////	char* pc = &a;  //存放地址时什么样的都可以存放但是解引用操作时只能操作类型大小的字节
//	//	*pc = 0;
//	printf("%p\n", pa);
//	printf("%d\n", a);
//	
////	printf("%p\n", pc);
//	return 0;
//}


//指针加减整数
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//000000000062FE0C
//	printf("%p\n", pa+1);//000000000062FE10
//	
//	printf("%p\n", pc);//000000000062FE0C
//	printf("%p\n", pc+1);//000000000062FE0D
//	return 0;
//}


//类型不同对数组的影响
//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	//char* p = arr;
//	int i = 0;
//	for(i = 0;i<10;i++)
//	{
//		*(p+1) = 1;
//	}
//	return 0;
//}


//int main()
//{
////	int* p;//野指针，未初始化
//	
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	for(i =0;i<12;i++)
//	{
//		p++;
//	}//野指针，越界访问
//	
//	return 0;
//}

int* test()
{
	int a = 10;
	return &a;
}

int main()
{
	int* p = test();
	*p = 20;//指向空间被释放的地址
	return 0;
}


