#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//指针-指针
//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int ret = 0;
//	ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//模拟实现库函数strlen

//size_t MyStrlen(const char* str)
//{
//	assert(str);
// 
//	size_t len = 0;
//	
//	while (*str != '\0')
//	{
//		len++;
//		str++;
//	}
//	return len;
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	size_t len = MyStrlen(str);
//
//	printf("len = %d\n", len);
//	return 0;
//}



//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

void OddToBefore(int* arr, int sz)
{
	int* left = arr;
	int* right = arr + sz -1;
	while (left < right)
	{
		//左边找一个偶数
		if ((left < right) && (*left) % 2 != 0)
		{
			left++;
		}

		//右边找一个奇数
		if ((left < right) && (*right) % 2 != 1)
		{
			right--;
		}

		//两边交换
		int tmp = *left;
		*left = *right;
		*right = tmp;

	}
}

//void OddToBefore(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp;
//	while (left < right)
//	{
//		// 从前往后，找到一个偶数，找到后停止
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//
//		// 从后往前找，找一个奇数，找到后停止
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//
//		// 如果偶数和奇数都找到，交换这两个数据的位置
//		// 然后继续找，直到两个指针相遇
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}

int main()
{
	int arr[] = { 2,4,6,8,1,3,7,5,9 };

	int sz = sizeof(arr) / sizeof(arr[0]);
	OddToBefore(arr, sz);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}