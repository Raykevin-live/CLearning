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
		ps->a = tmp;//赋值给a去管理地址
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
	ps->capacity = ps->size = 0;//赋值表达式，从右往左赋值
}

void SLPushBack(SL* ps, SLDateType x)
{
	//扩容
	is_expand(ps);

	/*ps->a[ps->size] = x;
	ps->size++;*/ //这两种写法一样的
	
	ps->a[ps->size++] = x;
}

void SLPopBack(SL* ps)
{
	//暴力检查
	assert(ps->size > 0);
	// 温柔检查
	//ps->a[ps->size] = 0; //这句事实上没有意义，只要减掉size数据就会减少一条。
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