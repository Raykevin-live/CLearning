#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

// 对数据的管理:增删查改 
void SeqListInit(SeqList* ps)
{
	ps->size = 0;
	ps->capacity = 4;
	ps->a = (SLDateType*)malloc(sizeof(SLDateType) * ps->capacity);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		exit(1);
	}
}
void SeqListDestroy(SeqList* ps)
{
	assert(ps);
	free(ps->a);
	ps->size = 0;
	ps->capacity = 4;
	ps->a = NULL;
}

void SeqListPrint(SeqList* ps)
{
	if (ps->size != 0)
	{
		for (int i = 0; i < ps->size; i++)
		{
			printf("%d ", *(ps->a + i));
		}
		printf("\n");

	}
	else
	{
		printf("空\n");
	}
}
void SeqCheckCapacity(SeqList* ps)
{
	assert(ps);
	if (ps->size >= ps->capacity)
	{
		int newCapacity = ps->capacity * 2;
		SLDateType* new = (SLDateType*)realloc(ps->a, newCapacity * sizeof(SLDateType));
		if (new == NULL)
		{
			perror("relloc fail");
			exit(1);
		}
		ps->a = new;
		ps->capacity = newCapacity;
	}
}
void SeqListPushBack(SeqList* ps, SLDateType x)
{
	assert(ps);

	SeqCheckCapacity(ps);
	ps->a[ps->size++] = x;

}
void SeqListPushFront(SeqList* ps, SLDateType x)
{
	assert(ps);
	SeqCheckCapacity(ps);
	for (int i = ps->size ; i >=1; i--)
	{
		*(ps->a + i) = *(ps->a + i - 1);
	}
	ps->size++;
	ps->a[0] = x;
 }
void SeqListPopFront(SeqList* ps)
{
	assert(ps && ps->size);
	for (int i = 0; i < ps->size -1; i++)
	{
		*(ps->a + i) = *(ps->a + i + 1);
	}
	ps->size --;
}
void SeqListPopBack(SeqList* ps)
{
	assert(ps && ps->size);

	ps->size --;
}
	
// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (*(ps->a + i) == x)
		{
			return i;
		}
	}
	return -1;
}
// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, int pos, SLDateType x)
{
	assert(ps && pos>=0 && pos<=ps->size);
	SeqCheckCapacity(ps);

	for (int i = ps->size; i > pos; i--)
	{
		*(ps->a + i) = *(ps->a + i - 1);
	}
	ps->size++;
	ps->a[pos] = x;
}
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, int pos)
{
	assert(ps && pos >= 0 && pos < ps->size);
	for (int i = pos; i < ps->size; i++)
	{
		*(ps->a + i) = *(ps->a + i + 1);
	}
	ps->size--;
}