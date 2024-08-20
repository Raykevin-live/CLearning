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
//最坏O(N^2)
//最好O(N)
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
// O(N^1.3左右)
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

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//最好O(N^2)
//最坏O(N^2)
void SelectSort(int* a, int n)
{
	int left = 0, right = n - 1;

	while (left < right)
	{
		int mini = left, maxi = left;
		for (int i = left + 1; i <= right; i++)
		{
			if (a[i] < a[mini])
			{
				mini = i;
			}
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
		}
		Swap(&a[left], &a[mini]);
		//如果left和maxi重叠，交换后修正一下，否则这里会出问题，换两次换回去了
		if (maxi == left)
		{
			maxi = mini;
		}
		Swap(&a[right], &a[maxi]);

		left++;
		right--;
	}

}

void ADjustDown(int* a, int sz, int parent)
{
	int child = parent * 2 + 1;
	while (child < sz)
	{
		//选出左右孩子中大的一个
		//这里child+1的判断在前，不要先访问再判断
		//这里a[child + 1] > a[child] 建大堆用>， 建小堆用<
		if (child + 1 < sz && a[child + 1] > a[child])
		{
			//这地方可能会越界
			++child;
		}
		//这里a[child] > a[parent] 建大堆用>， 建小堆用<
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int* a, int sz)
{
	//1.建堆 -- 向上调整建堆   NlogN
	//左右子树必须是大堆/小堆
	/*for (int i = 1; i < sz; i++)
	{
		ADjustUp(a, i);
	}*/

	//2.向下调整建堆  N
	//左右子树必须是大堆/小堆
	for (int i = (sz - 1 - 1) / 2; i >= 0; i--)
	{
		ADjustDown(a, sz, i);
	}

	int end = sz - 1;
	while (end > 0)
	{
		Swap(&a[end], &a[0]);
		ADjustDown(a, end, 0);
		--end;
	}
}

//最坏O(N^2)
//最好O(N)
void BubbleSort(int* a, int n)
{
	int isorder = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n-i; j++)
		{
			if (a[j-1] > a[j])
			{
				Swap(&a[j - 1], &a[j]);
				isorder = 0;
			}
		}
		if (isorder == 1)
		{
			break;
		}
	}
}

//三数取中
int GetMidNumi(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[mid] > a[left])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left] > a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else //a[mid] <= a[left]
	{
		if (a[right] < a[mid])
		{
			return mid;
		}
		else if (a[right] > a[left])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
}

//快排 Nlog(N)
//hoare版本
void QuickSort(int* a, int left, int right)
{
	//递归结束条件
	if (left >= right)
	{
		return;
	}

	int begin = left;
	int end = right;

	////优化：随机选key， 如果key选到最大值或者最小值都会导致最复杂
	//int randi = left + (rand() % (right - left));
	//Swap(&a[left], &a[randi]);

	//优化：三数取中
	int midi = GetMidNumi(a, left, right);
	Swap(&a[left], &a[midi]);

	int keyi = left;
	//这地方left 不能先+1，否则最后一步交换会出问题
	while (left < right)
	{
		//右边先找小
		//注意内部没有判断left< right
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}
		//左边找大
		while (left < right && a[left] <= a[keyi])
		{
			left++;
		}

		Swap(&a[left], &a[right]);
	}
	Swap(&a[keyi], &a[left]);
	keyi = left;

	//[begin, keyi-1] keyi [keyi+1, end]
	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
}