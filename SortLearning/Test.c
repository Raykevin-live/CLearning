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

int main()
{
	//TestInsertSort();
	TestShellSort();
	return 0;
}