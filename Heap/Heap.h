#pragma once

typedef int HPDataType;

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;


void HeapInit(HP* php);
void HeapPush(HP* php, HPDataType x);
void HeapPop(HP* php);