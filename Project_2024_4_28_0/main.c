#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int* (*pa)[10] = &arr;
//	//函数指针
//	int (*pAdd)(int , int) = Add;
//	int sum = pAdd(1, 2);
//	//函数指针的数组
//	int (*pArr[5])(int ,int);
//	//指向函数指针数组的指针
//	int (*(*ppArr)[5])(int ,int) = &pArr;
//	
//	return 0;
//}


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	
//	for(i = 0;i<sz-1;i++)
//	{
//		int j = 0;
//		for(j =0; j<sz-1-i ;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}

void qsort (void* base,
			size_t num,
			size_t size,
			int (*compar)(const void*,const void*)
			);

typedef struct Stu
{
	char name[20];
	int age;
}Stu;

int cmp_int(const void* e1, const void* e2)
{
	//比较两个整型
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void* e1, const void* e2)
{
	//比较两个浮点型
	if(*(float*)e1 == *(float*)e2)
		return 0;
	else if(*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
	
}

void test1()
{
	int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for(i =0;i<sz;i++)
	{
		printf("%d ", arr[i]);
	}
}

void test2()
{
	float f[] = {9.0, 8.0, 7.0, 6.0, 5.0, 4.0};
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for(i =0;i<sz;i++)
	{
		printf("%f ", f[i]);
	}
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;  
}

int cmp_stu_by_name(const void*e1, const void* e2)
{
	//比较名字就是比较字符串
	//比较字符串不能直接用><=去比较，要用strcmp
	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
}

void test3()
{
	Stu s[3] = {{"张三", 20}, {"李四", 30}, {"王五", 10}};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	int i = 0;
	for(i =0;i<sz;i++)
	{
		printf("%d ", s[i].age);
	}
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for(i =0;i<width ;i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//程序员不知道待排序的类型，也不知待比较的两个元素的类型
void bubble_sort(void* base, int sz, int width,int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	//趟数
	for(i = 0;i<sz-1;i++)
	{
		//每一趟的对数
		int j = 0;
		for(j =0; j<sz-1-i ;j++)
		{
			//两个元素比较
			if(cmp((char*)base+j*width, (char*)base+(j+1)*width) >0)
			{
				//交换
				Swap((char*)base+j*width, (char*)base+(j+1)*width, width); 
			}
		}
	}
}

void test4()
{
	int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}

void test5()
{
	Stu s[3] = {{"张三", 20}, {"李四", 30}, {"王五", 10}};
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

int main()
{
	
	
	test1();
	test2();
	test3();
	test4();
	//	bubble_sort(arr, sz);	
	return 0;
}
