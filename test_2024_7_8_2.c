#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


//返回栈空间地址问题
char* GetMemory(void)
{
	char p[] = "hello world";
	return p;//栈区
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);//非法访问
	
}

//int main()
//{
//	Test();
//	return 0;
//}

//int* test(void)
//{
//	int* ptr = malloc(100);//堆区
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();//堆空间如果不释放，会一直存在
//	return 0;
//}


//柔性数组(C99标准)
//struct S
//{
//	int n ;
//	int arr[];//柔性数组成员 - 未知大小的 - 数组成员大小可以调整的
////	int arr1[0];//这两种写法都可以
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));//柔性数组的使用
//	
//	ps->n = 100;
//	int i = 0;
//	for(i = 0; i<5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if(ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for(i = 5; i <10; i++)
//	{
//		
//		ps->arr[i] = i;
//	}
//	for(i =0; i<10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//使用指针创建可调整大小的空间(malloc函数)- 代替柔性数组
struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5*sizeof(int));
	int i = 0;
	for(i =0; i<5; i++)
	{
		ps->arr[i] = i;
		
	}
	for(i = 0; i< 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//调整大小
	int* ptr = realloc(ps->arr, 10* sizeof(int));
	if(ptr != NULL)
	{
		ps->arr = ptr;		
	}
	for(i = 0; i< 10; i++)
	{
		ps->arr[i] = i;
	}
	for(i = 0; i< 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	
	//两次释放，先释放小的，再释放大的，如果先释放外层，则无法找到内层空间的指针
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	
	return 0;
}
