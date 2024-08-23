#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"
#include "Stack.h"
#include "Queue.h"

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

//三数取中，有序情况下最快
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

//快排 O(Nlog(N)) 最慢O(N^2)
//hoare版本
int PartSort1(int* a, int left, int right)
{

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
	//相遇位置一定比key小
	Swap(&a[keyi], &a[left]);
	keyi = left;

	return keyi;
}

//挖坑版
int PartSort2(int* a, int left, int right)
{
	////优化：随机选key， 如果key选到最大值或者最小值都会导致最复杂
	//int randi = left + (rand() % (right - left));
	//Swap(&a[left], &a[randi]);

	//优化：三数取中
	int midi = GetMidNumi(a, left, right);
	Swap(&a[left], &a[midi]);

	int key = a[left];
	int pit = left;
	//这地方left 不能先+1，否则最后一步交换会出问题
	while (left < right)
	{
		//右边先找小
		//注意内部没有判断left< right
		while (left < right && a[right] >= key)
		{
			right--;
		}
		a[pit] = a[right];
		pit = right;
		//左边找大
		while (left < right && a[left] <= key)
		{
			left++;
		}

		a[pit] = a[left];
		pit = left;
	}
	//相遇位置一定比key小
	a[pit] = key;

	return pit;
}

//前后指针法
int PartSort3(int* a, int left, int right)
{
	int midi = GetMidNumi(a, left, right);
	if (midi != left)
	{
		Swap(&a[left], &a[midi]);
	}

	int keyi = left;

	int prev = left;
	int cur = left + 1;
			
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
		{
			Swap(&a[prev], &a[cur]);
		}
		
		++cur;
	}
	//这里prev直接换就好了，不用交换
	Swap(&a[prev], &a[keyi]);
	keyi = prev;
	
	return keyi;
}

void QuickSort(int* a, int left, int right)
{
	//递归结束条件
	if (left >= right)
	{
		return;
	}

	//小区间优化 -- 小区间使用插入排序
	//这个数字不能太大，否则没有意义
	if ((right - left + 1) > 10)
	{
		int keyi = PartSort3(a, left, right);

		//[begin, keyi-1] keyi [keyi+1, end]

		QuickSort(a, left, keyi - 1);
		QuickSort(a, keyi+1, right);
	}
	else
	{
		InsertSort(a + left, right - left +1);
	}
}

void QuickSortNonR(int* a, int left, int right)
{
	ST st;
	STInit(&st);
	STPush(&st, right);
	STPush(&st, left);
	while (!STEmpty(&st))
	{
		int begin = STTop(&st);
		STPop(&st);
		int end = STTop(&st);
		STPop(&st);

		int keyi = PartSort3(a, begin, end);
		if (end > keyi + 1)
		{
			STPush(&st, end);
			STPush(&st, keyi + 1);
		}
		if (begin < keyi - 1)
		{
			STPush(&st, keyi - 1);
			STPush(&st, begin);
		}
	}
	STDestroy(&st);
}


//归并排序，O(NlogN)
void _MergeSort(int* a, int begin, int end, int* tmp)
{
	//递归结束条件
	if (begin >= end)
	{
		return;
	}
	int mid = (begin + end) / 2;
	//mid控制递归
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);

	//[begin, mid] [mid+1, end]归并
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	//i为每个栈帧中的独立变量，控制每一次的归并
	int i = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		//begin1<=begin2，可以做到稳定
		if (a[begin1] <= a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
		
	}
	//没排到的直接接到后面
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}
	//覆盖到原数组
	memcpy(a+begin, tmp+begin, sizeof(int)*(end-begin+1));
}

void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;
	}
	_MergeSort(a, 0, n - 1, tmp);

	free(tmp);
	tmp = NULL;
}

void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;
	}

	int gap = 1;//gap是归并过程中，每组数据的个数
	while (gap < n)
	{

		//一次排2*gap个数据
		for (int i = 0; i < n; i += 2*gap)
		{
			//边界控制
			//[begin1, end1], [begin2, end2]
			//[i, i+gap-1], [i+gap, i+2*gap -1]
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + gap * 2 - 1;

			//边界会出现越界的情况，修正边界
			// 	复杂问题分解为简单问题：分类处理
				//1.end1越界？不归并
				//2.end1没有越界，begin2越界了？跟1一样处理
				//3.end1、begin没有越界，end2越界了？ 继续归并，修正

			//if (end1 >= n)
			//{
			//	end1 = n - 1;
			//	/*begin2 = n - 1;//这种修正是错误的
			//	end2 = n - 1;*/
			//全部排好，再拷贝时，需要修正为不存在的区间，否则直接拷贝时会出问题
			//	begin2 = n;
			//	end2 = n - 1;
			//}
			//else if (begin2 >= n)
			//{
			//	begin2 = n;
			//	end2 = n - 1;
			//}
			//else if (end2>=n)
			//{
			//	end2 = n - 1;
			//}
			//归并一次，拷贝一次（推荐）
			if (end1 >= n || begin2 >= n)
			{
				break;
			}
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			//归并
			int j = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				//begin1<=begin2时可以做到稳定
				if (a[begin1] <= a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}
			//没排到的直接接到后面
			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}
			//数据覆盖到原数组
			memcpy(a + i, tmp + i, sizeof(int) * (end2 - i + 1));
		}
		// 间距为gap的多组数据，归并完后，直接一次拷贝
		//memcpy(a , tmp , sizeof(int) * n);

		gap *= 2;//gap控制遍历
	}
	free(tmp);
	tmp = NULL;
}

//计数排序 O(N+range)
// 空间复杂度：O(range)
// 适合范围集中且范围不大的整形数组的排序	，负数也可以(相对映射)
// 不适合范围分散或者非整形数据的排序
void CountSort(int* a, int n)
{
	//找范围
	int min = a[0], max = a[0];

	for (int i = 0; i < n; ++i)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	int range = max - min + 1;
	int* countA = (int*)calloc(range, sizeof(int));//初始化为0
	if (countA == NULL)
	{
		perror("malloc fail");
		return;
	}

	//计数
	for (int i = 0; i < n; i++)
	{
		countA[a[i]-min]++;
	}
	// 排序
	int j = 0;
	for (int i = 0; i < range; i++)
	{
		while (countA[i]--)
		{
			a[j++] = min + i;
		}
	}
	free(countA);
	return;
}


int GetKey(int value, int k)
{
	int key = 0;
	while (k >= 0)
	{
		key = value % 10;
		value /= 10;
		--k;
	}
	return key;
}

void Distribute(int* a, int left, int right, int k, Queue* Qu[10])
{
	for (int i = left; i <= right; ++i)
	{
		int key = GetKey(a[i], k);
		//入队 ,写错了
		QueuePush(Qu[key], a[i]);		
	}
}

void Collect(int* a, Queue* Qu[10])
{
	int k = 0;
	for (int i = 0; i < RADIX; i++)
	{
		while (!QueueEmpty(Qu[i]))
		{
			a[k++] = QueueFront(Qu[i]);
			QueuePop(Qu[i]);
		}
	}
}

//基数排序，先进先出用队列
void RadixSort(int* a, int left, int right)
{
	Queue q0, q1, q2, q3, q4, q5, q6, q7, q8, q9;
	//初始化
	QueueInit(&q0);
	QueueInit(&q1);
	QueueInit(&q2);
	QueueInit(&q3);
	QueueInit(&q4);
	QueueInit(&q5);
	QueueInit(&q6);
	QueueInit(&q7);
	QueueInit(&q8);
	QueueInit(&q9);
	//建数组
	Queue* Qu[10] = {&q0 ,&q1, &q2, &q3, &q4, &q5, &q6, &q7, &q8, &q9 };

	for (int i = 0; i < K; i++)
	{
		//分发数据
		Distribute(a, left, right, i, Qu);
		//回收数据
		Collect(a, Qu);
	}

	QueueDestory(&q0);
	QueueDestory(&q1);
	QueueDestory(&q2);
	QueueDestory(&q3);
	QueueDestory(&q4);
	QueueDestory(&q5);
	QueueDestory(&q6);
	QueueDestory(&q7);
	QueueDestory(&q8);
	QueueDestory(&q9);
}