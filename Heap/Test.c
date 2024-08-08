#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"


int main()
{
	HP hp;
	HeapInit(&hp);
	HeapPush(&hp, 4);
	HeapPush(&hp, 18);
	HeapPush(&hp, 42);
	HeapPush(&hp, 12);
	HeapPush(&hp, 5);
	HeapPush(&hp, 1);

	while (!HeapEmpty(&hp))
	{
		printf("%d ", HeapTop(&hp));
		HeapPop(&hp);
	}

	printf("\n");

	return 0;
}