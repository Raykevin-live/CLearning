#define _CRT_SECURE_NO_WARNINGS 1
#include "Sqlist.h"

void is_expand(SL* ps);

static void is_expand(SL* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)
	{
		SLDataType* tmp = (SLDataType*)realloc(ps->a, sizeof(SLDataType)* ps->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;	
		}
		ps->a = tmp;//��ֵ��aȥ�����ַ
		ps->capacity *= 2;
	}
}

void SLInit(SL* ps)
{
	assert(ps);

	ps->a = (SLDataType*)malloc(sizeof(SLDataType)*INIT_CAPACITY);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		return;
	}
	ps->size = 0;
	ps->capacity = INIT_CAPACITY;
}


void SLDestory(SL* ps)
{
	assert(ps);

	ps->capacity = ps->size = 0;//��ֵ���ʽ����������ֵ

	free(ps);
	ps->a = NULL;
}

void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);

	//����
	is_expand(ps);

	/*ps->a[ps->size] = x;
	ps->size++;*/ //������д��һ����
	
	ps->a[ps->size++] = x;
}

void SLPopBack(SL* ps)
{
	assert(ps);

	//�������
	assert(ps->size > 0);
	// ������
	//ps->a[ps->size] = 0; //�����ʵ��û�����壬ֻҪ����size���ݾͻ����һ����
	/*if (0 == ps->size)
	{
		return;
	}*/ 
	ps->size--;
}

void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);

	is_expand(ps);

	int end = ps->size - 1; 
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[0] = x;
	ps->size++;
}

void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size > 0);

	int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}

	ps->size--;
}

void SLPrint(SL* ps)
{
	assert(ps);

	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SLInsert(SL* ps, int pos, SLDataType x)  //���Ը��õ�ͷ���β����
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);

	is_expand(ps);

	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[pos] = x;
	ps->size++;
}

void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}

	ps->size--;
}

int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
