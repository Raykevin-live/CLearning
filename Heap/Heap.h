#pragma once

typedef int HPDataType;

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;


void HeapInit(HP* php);
void HeapDestory(HP* php);

void HeapPush(HP* php, HPDataType x);
void HeapPop(HP* php);
HPDataType HeapTop(HP* php);
bool HeapEmpty(HP* php);
int HeapSize(HP* php);

void ADjustUp(HPDataType* a, int child);
void ADjustDown(HPDataType* a, int sz, int parent);