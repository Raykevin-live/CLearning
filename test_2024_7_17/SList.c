#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

//�����½��
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
	assert(pphead);
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

		//��������
		cur = cur->next;
	}

	return NULL;
}

//pos ֮ǰ���� -- ����Ѱ��pos֮ǰ�Ľ���ַ������������Insertȥɾ��
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	//���� pos ����Ϊ�� 
	assert(pos);


	if (pos == *pphead)
	{
		SLTPushFront(&pos, x);
	}
	else
	{
		SLTNode* prev = *pphead;
		//Ѱ��pos��ǰһ�����
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		SLTNode* newnode = BuySLTNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}

//��pos֮ǰɾ��
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
		//����ֱ���ÿ�posû��
		//Ҳ���Դ������ָ��pposֱ���������ͷ�
	}
}

//pos֮�����
void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);

	SLTNode* newnode = BuySLTNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

//pos֮��ɾ��
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);

	//Ϊ�˲���ʧpos->next����¼��
	SLTNode* del = pos->next;
	pos->next = del->next;

	free(del);
	del = NULL;
}



