#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

void TestInsertSort()
{
	int a[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	InsertSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestShellSort()
{
	int a[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	ShellSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestSelectSort()
{
	int a[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	SelectSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestHeapSortSort()
{
	int a[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	HeapSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestBubbleSortSort()
{
	int a[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	BubbleSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestQuickSort()
{
	int a[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	QuickSort(a, 0, (sizeof(a) / sizeof(a[0])) - 1);
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

int main()
{
	srand((unsigned int)time(NULL));
	//TestInsertSort();
	//TestShellSort();
	//TestSelectSort();
	//TestHeapSortSort();
	//TestBubbleSortSort();
	TestQuickSort();

	return 0;
}