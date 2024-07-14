#define _CRT_SECURE_NO_WARNINGS 1
#include "Sqlist.h"


static void is_expand(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		SLDateType* tmp = (SLDateType*)realloc(ps->a, sizeof(SLDateType)* ps->capacity * 2);
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
	ps->a = (SLDateType*)malloc(sizeof(SLDateType)*INIT_CAPACITY);
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
	free(ps);
	ps->a = NULL;
	ps->capacity = ps->size = 0;//��ֵ���ʽ����������ֵ
}

void SLPushBack(SL* ps, SLDateType x)
{
	//����
	is_expand(ps);

	/*ps->a[ps->size] = x;
	ps->size++;*/ //������д��һ����
	
	ps->a[ps->size++] = x;
}

void SLPopBack(SL* ps)
{
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

void SLPushFront(SL* ps, SLDateType x)
{

}

void SLPopFront(SL* ps)
{

}

void SLPrint(SL* ps)
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}