#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//void print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}

//void BubbleSort(int arr[], int sz)
//{
//	int sort = 1;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		sort = 1;
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				sort = 0;
//			}
//		}
//		if (sort == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 2, 1, 5, 4, 3, 9, 8, 7, 6, 0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//print(arr, sz);
//	BubbleSort(arr, sz);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

//int IsReverse(const char s1[], const char s2[])
//{
//	assert(s1 && s2);
//	assert(strlen(s1) == strlen(s2));
//
//	char ch[20] = { 0 };
//	for (int i = 0; i < strlen(s1); i++)
//	{
//		ch[i] = s1[i];
//	}
//		
//	strncat(ch, ch, strlen(ch));
//	char* p = strstr(ch, s2);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	int ret = IsReverse(s1, s2);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。

//int FindNum(int arr[3][3], int k, int x, int y)
//{
//	int row = 0;
//	int col = y - 1;
//	while (row <= x - 1 && col >= 0)
//	{
//		if (arr[row][col] > k)
//		{
//			col--;
//		}
//		else if (arr[row][col] < k)
//		{
//			row++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9 } };
//	int k = 1;
//	int x = 3;
//	int y = 3;
//
//	//返回型参数
//	int ret = FindNum(arr, k, x, y);
//
//	if (1 == ret)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//
//
//	return 0;
//}



//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//int main()
//{
//	char thief = '0';
//	char ch[4] = "ABCD";
//	for (int i = 0; i < 4; i++)
//	{
//		thief = ch[i];
//		if (thief == 'A' && thief == 'C' && thief == 'D' && thief != 'D')
//		{
//			break;
//		}
//		else if (thief != 'A' && thief != 'C' && thief == 'D' && thief != 'D')
//		{
//			break;
//		}
//		else if (thief != 'A' && thief == 'C' && thief != 'D')
//		{
//			break;
//		}
//		else if (thief != 'A' && thief == 'C' && thief == 'D')
//		{
//			break;
//		}
//	}
//	printf("The thief is %c\n", thief);
//	
//	return 0;
//}


//在屏幕上打印杨辉三角

int main()
{
	int n = 0;
	int tri[50][50] = {0};
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j || j == 0)
			{
				tri[i][j] = 1;
			}
			else if (i > j)
			{
				tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", tri[i][j]);
		}
		printf("\n");
	}
	return 0;
}