#include <stdio.h>

//int main()
//{
//	const char* p = "abcdef";
// //	*p = 'w';//这样的写法是错误的
//	printf("%s\n", p);
//	return 0;
//}//将 abcdef 的首字符的地址存到p中


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//常量字符串，不可以被修改
//	char* p2 = "abcdef";
//	
//	if(p1 == p2)//只存放a这个字符的地址，所以是一样的
//	{
//		printf("hehe\n");
//	}
//	else{
//		printf("haha\n");
//	}
//	return 0;
//	
//	
////	if(arr1 == arr2)//地址不一样
////	{
////		printf("hehe\n");
////	}
////	else{
////		printf("haha\n");
////	}
////	return 0;
//}

//int main()
//{
//	int arr[10] = {0};//整型数组
//	char ch[5] = {0};//字符数组
//	int* parr[4];//存放整型指针的数组 -- 指针数组
//	char* pch[5];//存放字符指针的数组 -- 指针数组
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = {&a, &b, &c, &d};
//	int i = 0;
//	for(i = 0;i< 4;i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//指针数组
//int main()
//{
//	int arr1[] = {1, 2, 3, 4, 5};
//	int arr2[] = {2, 3, 4, 5, 6};
//	int arr3[] = {3, 4, 5, 6, 7};
//	int* parr[] = {arr1, arr2, arr3};
//	
//	int i = 0;
//	for(i = 0;i<3;i++)
//	{
//		int j = 0;
//		for(j = 0;j<5;j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	int* p = NULL;//整型指针，指向整型的指针 - 可以存放整型的地址
//	char* pc = NULL;//字符指针 - 指向字符的指针 - 可以存放字符的地址
//	//数组指针 - 指向数组的指针 - 存放数组的地址
//	
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int(*pa)[10] = &arr;//数组的地址
//	// *pa 说明pa是个指针，[10]说明指向的数组有10个元素
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}//数组指针





////参数是数组的形式
//void print1(int arr[3][5], int x ,int y)
//{
//	int i = 0;
//	int j= 0;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//}
//
////参数是指针的形式
//void print2(int (*p)[5], int x, int y)
//{
//	int i =0;
//	for(i=0;i<x;i++)
//	{
//		int j = 0;
//		for(j=0;j<y;j++)
//		{
//			printf("%d ", *(*(p+i)+j));//p+i是跳过几行，*(p+i)是arr的地址
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6,},{3,4,5,6,7}};
//	
//	print1(arr,3,5);//arr 数组名就是首元素地址 - 第一行的地址
//	print2(arr,3,5);
//	
//	return 0;
//}





//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int* arr)
//{}
//void test2(int* arr[20])
//{}
//void test2(int* *arr)
//{}//这几种传参都是可以的
//
//int main()
//{
//	int arr[10] = {0};
//	int* arr2[20] = {0};
//	test(arr);
//	test2(arr2);
//	return 0;
//}




//二维数组传参,传第一行的地址
void test(int arr[3][5])
{}
void test1(int arr[][5])//行可以省略，列不可以省略
{}

void test2(int (*arr)[5])//指向数组的指针
{}
//三种形式

int main()
{
	int arr[3][5] = {0};
	
	test(arr);
	test1(arr);
	test2(arr);
	return 0;
}

