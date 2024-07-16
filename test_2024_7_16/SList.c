#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

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
	//�����Զ���
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
		//��β
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
	assert(*pphead);//��������ɾ���������Բ��룬Ҫע��
	//1.ֻ��һ�����
	//2.������
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	 }
	else
	{
		//SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		//��β
		while (tail->next->next != NULL)//�ҵ����ڶ���
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
	assert(*pphead);
	SLTNode* first = *pphead;
	*pphead = first->next;

	free(first);
	first = NULL;
}
