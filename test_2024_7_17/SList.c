#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

//插入新结点
SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fali");
		return NULL;
	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SLTPrint(SLTNode* phead)
{
	//不可以断言
	SLTNode* cur = phead;

	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
		SLTNode* newnode = BuySLTNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//找尾
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);

	newnode->next = *pphead;
	*pphead = newnode;
}

void SLTPopBack(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);//空链表不能删除，但可以插入，要注意

	//1.只有一个结点
	//2.多个结点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	 }
	else
	{
		//SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		//找尾
		while (tail->next->next != NULL)//找倒数第二个
		{
			//prev = tail;
			tail = tail->next;
		}

		free(tail->next);
		tail->next = NULL;
		//prev->next = NULL;
	}
	
}

void SLTPopFront(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	SLTNode* first = *pphead;
	*pphead = first->next;

	free(first);
	first = NULL;
}


SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;

	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}

		//遍历链表
		cur = cur->next;
	}

	return NULL;
}

//pos 之前插入 -- 不好寻找pos之前的结点地址，空链表不能用Insert去删除
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	//断言 pos 不能为空 
	assert(pos);


	if (pos == *pphead)
	{
		SLTPushFront(&pos, x);
	}
	else
	{
		SLTNode* prev = *pphead;
		//寻找pos的前一个结点
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		SLTNode* newnode = BuySLTNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}

//从pos之前删除
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);
	assert(*pphead);

	if (*pphead == pos)
	{
		SLTPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		prev->next = pos->next;

		free(pos);
		//这里直接置空pos没用
		//也可以传入二级指针ppos直接在这里释放
	}
}

//pos之后插入
void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);

	SLTNode* newnode = BuySLTNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

//pos之后删除
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);

	//为了不丢失pos->next，记录它
	SLTNode* del = pos->next;
	pos->next = del->next;

	free(del);
	del = NULL;
}



