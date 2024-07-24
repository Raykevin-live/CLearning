#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"


void STInit(ST* ps)
{
	assert(ps);

	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		return;
	}

	ps->capacity = 4;
	ps->top = -1;//Õ»¶¥ÔªËØÎ»ÖÃ
}

void STDestroy(ST* ps)
{
	assert(ps);

	free(ps->a);

	ps->a = NULL;
	ps->top = -1;
	ps->capacity = 0;
}

void STPush(ST* ps, STDataType x)
{
	assert(ps);

	if ((ps->top +1) == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * ps->capacity*2);
		if (tmp == NULL)
		{
			perror("malloc fail");
			return;
		}

		ps->a = tmp;
		ps->capacity *= 2;
	}

	ps->a[ps->top + 1] = x;

	ps->top++;
} 

void STPop(ST* ps)
{
	assert(ps);
	assert(!STEmpty(ps));

	ps->top--;
}

int STSize(ST* ps)
{
	assert(ps);

	return ps->top + 1;
}

bool STEmpty(ST* ps)
{
	assert(ps);

	return (ps->top + 1) == 0;
}

STDataType STTop(ST* ps)
{
	assert(ps);
	assert(!STEmpty(ps));

	return ps->a[ps->top];
}