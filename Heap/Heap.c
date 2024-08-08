#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

void HeapInit(HP* php)
{
	assert(php);

	php->a = (HPDataType*)malloc(sizeof(HPDataType)*4);
	if (php->a == NULL)
	{
		perror("malloc fail");
		return;
	}

	php->size = 0;
	php->capacity = 4;
}

void HeapDestory(HP* php)
{
	free(php->a);
	php->a = NULL;
	php->size = 0;
	php->capacity = 0;
}

void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//除了child,其他地方构成大堆/小堆
void ADjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	//不建议while(parent>=0) 因为parent到不了-1，但是也可以跑，因为后面if条件不满足
	while (child>0)
	{
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void HeapPush(HP* php, HPDataType x)
{
	assert(php);

	if (php->size == php->capacity)
	{
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * php->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}

		php->a = tmp;
		php->capacity *= 2;
	}
	php->a[php->size] = x;
	php->size++;

	ADjustUp(php->a, php->size - 1);
}

//左右子树都是大堆或者小堆
void ADjustDown(HPDataType* a, int sz, int parent)
{
	int child = parent * 2 + 1;
	while (child < sz)
	{
		//选出左右孩子中大的一个
		//这里child+1的判断在前，不要先访问再判断
		if (child+1<sz && a[child + 1] > a[child])
		{
			//这地方可能会越界
			++child;
		}

		if (a[child] > a[parent])
		{
			//Swap(&a[child], a[a[parent]]);  //你的这里写的就是有问题的哦
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

void HeapPop(HP* php)
{
	assert(php);
	assert(!HeapEmpty(php));

	Swap(&php->a[0], &php->a[php->size-1]);
	php->size--;

	ADjustDown(php->a, php->size, 0);
}

HPDataType HeapTop(HP* php)
{
	assert(php);

	return php->a[0];
}

bool HeapEmpty(HP* php)
{
	assert(php);

	return php->size == 0;
}

int HeapSize(HP* php)
{
	assert(php);
	return php->size;
}