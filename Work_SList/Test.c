#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

int main()
{
	SeqList sl;
	SeqListInit(&sl);
	SeqListPrint(&sl);

	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 4);

	SeqListPushFront(&sl, 5);
	SeqListPushFront(&sl, 6);
	SeqListPushFront(&sl, 7);
	SeqListPushFront(&sl, 8);
	SeqListPrint(&sl);

	SeqListPopBack(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);

	printf("%d\n", SeqListFind(&sl, 1));

	SeqListInsert(&sl, 3, 9);
	SeqListPrint(&sl);

	SeqListErase(&sl, 3);
	SeqListPrint(&sl);

	SeqListDestroy(&sl);
	SeqListPrint(&sl);

	return 0;
}