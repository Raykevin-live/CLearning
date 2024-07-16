#define _CRT_SECURE_NO_WARNINGS 1
#include "Sqlist.h"



void TestSeqList1()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPushBack(&s, 6);
	SLPushBack(&s, 7);
	SLPushBack(&s, 8);
	SLPushBack(&s, 9);
	SLPrint(&s);


	SLPopBack(&s);
	SLPopBack(&s);
	SLPopBack(&s);
	SLPopBack(&s);


	SLPrint(&s);

}

void TestSeqList2()
{
	SL s;
	SLInit(&s);

	SLPushFront(&s, 1);
	SLPushFront(&s, 2);
	SLPushFront(&s, 3);
	SLPushFront(&s, 4);


	SLPopFront(&s);
	SLPrint(&s);

	SLPopFront(&s);
	SLPrint(&s);

	SLPopFront(&s);
	SLPrint(&s);

	SLPopFront(&s);
	SLPrint(&s);

	SLPopFront(&s);
	SLPrint(&s);
}

void TestSeqList3()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPushBack(&s, 6);
	SLPushBack(&s, 7);
	SLPushBack(&s, 8);
	SLPushBack(&s, 9);
	SLPrint(&s);

	SLPrint(&s);

	SLInsert(&s, 4, 40);
	SLPrint(&s);

	SLErase(&s, 4);
	SLPrint(&s);

	SLErase(&s, 3);
	SLPrint(&s);


	SLDestory(&s);
}
int main()
{
	//TestSeqList1();
	TestSeqList3();

	return 0;
}