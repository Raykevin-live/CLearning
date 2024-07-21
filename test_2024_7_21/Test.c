#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"


void TestList1()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPrint(plist);

	LTPopBack(plist);
	LTPopBack(plist);
	LTPrint(plist);

	LTPushFront(plist, 1);
	LTPushFront(plist, 2);
	LTPushFront(plist, 3);
	LTPushFront(plist, 4);
	LTPrint(plist);

	LTDestroy(plist);
	plist = NULL;

}


void TestList2()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPrint(plist);

	LTNode* pos = LTFind(plist, 3);
	if (pos)
	{
		LTErase(pos);//Ò²»áÉ¾³ýÉÚ±øÎ»
		pos = NULL;
	}

	LTPrint(plist);

	LTDestroy(plist);
	plist = NULL;
}

int main()
{
	TestList2();

	return 0;
}