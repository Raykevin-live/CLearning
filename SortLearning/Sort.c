#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

//升序
//O(N^2)
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		int end = i-1;
		int tmp = a[i];
		//将tmp插入到[0, end]区间中，保持有序
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}	
}

//分组排序
//1.预处理
void ShellSort(int* a, int n)
{
	//1.预处理
	int gap = n;
	while (gap > 1)
	{
		//这里必须保证gap最后一次是1
		//gap /= 2;
		gap = gap / 3 + 1;

		//法1：这种是排完一组再排
		/*for (int j = 0; j < gap; j++)
		{
			for (int i = gap+j; i < n; i += gap)
			{
				int end = i - gap;
				int tmp = a[end + gap];

				while (end >= 0)
				{
					if (tmp < a[end])
					{
						a[end + gap] = a[end];
						end -= gap;
					}
					else
					{
						break;
					}
				}
				a[end + gap] = tmp;
			}
		}*/
	//法2：少一层循环，但是时间杂度是一样的，这种是多组并排
		for (int i = gap; i < n; i++)
		{
			int end = i - gap;
			int tmp = a[end + gap];

			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}	
}