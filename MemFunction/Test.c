#define _CRT_SECURE_NO_WARNINGS 1
#include "Memory.h"

void test1()
{
	int arr1[] = { 1, 2, 3, 4 };
	int arr2[5] = { 0 };
	//memcpy(arr2, arr1, 2 * sizeof(int));
	MyMemcpy(arr2, arr1, 2 * sizeof(int));
}

void test2()
{
	int arr[] = { 1,2, 3, 4,5, 6, 7, 8 ,9, 10 };
	memmove(arr + 2, arr + 3, 4 * sizeof(int));
}

void test3()
{
	int arr[] = { 1,2, 3, 4,5, 6, 7, 8 ,9, 10 };
	MyMemmove(arr , arr + 3, 4 * sizeof(int));
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	//test1();
	//test2();
	test3();

	return 0;
}


