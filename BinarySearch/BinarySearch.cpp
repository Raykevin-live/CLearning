#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//找到返回下标，没找到返回-1
int bin_search(int arr[], int left, int right, int key)
{
	int cur = (right + left) / 2;

	while (left < right)
	{
		if (arr[cur] == key)
		{
			return cur;			
		}
		else if (arr[cur] > key)
		{
			right = cur;
		}
		else
		{
			left = cur;
		}
		cur = (right + left) / 2;
	}
	return -1;
}


int main()
{

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int a = bin_search(arr, 0, sizeof(arr) / sizeof(arr[0]), 10);

	printf("%d\n", a);
}