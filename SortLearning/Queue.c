#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"


void QueueInit(Queue* pq)
{
	assert(pq);

	pq->head = pq->tail = NULL;
	pq->size = 0;
}

void QueueDestory(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
	pq->size = 0;
}

void QueuePush(Queue* pq, QDataType x)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return;
	}
	newnode->data = x;
	newnode->next = NULL;

	//没有结点插入时
	if (pq->head == NULL)
	{
		assert(pq->tail == NULL);

		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
	pq->size++;
}

void QueuePop(Queue* pq)
{
	assert(pq && pq->head);
	
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
	pq->size--;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	
	return pq->size;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);

	return pq->size == 0;
}

QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->head->data;
}

QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->tail->data;
}



//定义函数指针类型
typedef void (*pf_t)(int);
