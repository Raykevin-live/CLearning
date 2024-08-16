#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"


//int main()
//{
//	HP hp;
//	HeapInit(&hp);
//	HeapPush(&hp, 4);
//	HeapPush(&hp, 18);
//	HeapPush(&hp, 42);
//	HeapPush(&hp, 12);
//	HeapPush(&hp, 5);
//	HeapPush(&hp, 1);
//
//	int k;
//	scanf("%d", &k);
//	//打印前k个数
//	while (!HeapEmpty(&hp) && k--)
//	{
//		printf("%d ", HeapTop(&hp));
//		HeapPop(&hp);
//	}
//
//	printf("\n");
//
//	return 0;
//}

//堆排序

//排升序，建大堆
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
	for (int i = (sz - 1 -1) / 2; i >= 0; i--)
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

//int main()
//{
//	int a[10] = { 2, 1, 5, 4, 7, 9, 8, 3, 6, 0};//对数组排序
//	int sz = sizeof(a) / sizeof(a[0]);
//	HeapSort(a, sz);
//
//	return 0;
//}



//TOP - K问题：即求数据结合中前K个最大的元素或者最小的元素，一般情况下数据量都比较大。
//比如：专业前10名、世界500强、富豪榜、游戏中前100的活跃玩家等。
//对于Top - K问题，能想到的最简单直接的方式就是排序，
// 但是：如果数据量非常大，排序就不太可取了(可能数据都不能一下子全部加载到内存中)。
// 最佳的方式就是用堆来解决，基本思路如下：
	//1. 用数据集合中前K个元素来建堆
	//前k个最大的元素，则建小堆
	//前k个最小的元素，则建大堆
	//2. 用剩余的N - K个元素依次与堆顶元素来比较，
	// 不满足则替换堆顶元素将剩余N - K个元素依次与堆顶元素比完之后，堆中剩余的K个元素就是所求的前K个最小或者最大的元素。



void PrintTopk(const char* file, int k)
{
	//1.建堆 -- 用a中的前k个元素建小堆
	int* topk = (int*)malloc(sizeof(int) * k);
	assert(topk);

	FILE* fout = fopen(file, "r");
	if (fout == NULL)
	{
		perror("fopen error");
		return;
	}

	//读出前k个数据建小堆
	for (int i = 0; i < k; i++)
	{
		fscanf(fout, "%d", &topk[i]);
	}

	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		ADjustDown(topk, k, i);
	}

	//2.将剩余n-k个元素依次与堆顶元素交换，不满则替换
	int val = 0;
	int ret = fscanf(fout, "%d", &val);
	while (ret != EOF)
	{
		if (val > topk[0])
		{
			topk[0] = val;
			ADjustDown(topk, k, 0);
		}
		ret = fscanf(fout, "%d", &val);
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d ", topk[i]);
	}
	printf("\n");


	free(topk);
	topk = NULL;
}

void CreatNData()
{
	//造数据
	int n = 10000;
	srand((unsigned int)time(0));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen error");
		return;
	}

	for (size_t i = 0; i < n; ++i)
	{
		int x = rand() % 10000;
		fprintf(fin, "%d\n", x);
	}
	fclose(fin);
}

int main()
{
	// 在测试时可以先运行第一个函数，创造好数据，
	// 然后修改k条数据，再运行第二步，在监视窗口观察
	CreatNData();
	PrintTopk("data.txt", 10);
		
	return 0;
}