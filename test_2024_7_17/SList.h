#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;

typedef struct SListNode  
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;



void SLTPrint(SLTNode* phead);
void SLTPushBack(SLTNode** pphead, SLTDataType x);//尾插
void SLTPushFront(SLTNode** pphead, SLTDataType x);//头插

void SLTPopBack(SLTNode** pphead);//尾删
void SLTPopFront(SLTNode** pphead);//头删

//单链表查找
SLTNode* SLTFind(SLTNode* phead, SLTDataType x);
//pos 之前插入
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//pos 之前删除
void SLTErase(SLTNode** pphead, SLTNode* pos);

//pos之后插入
void SLTInsertAfter(SLTNode* pos, SLTDataType x);
//pos之后删除
void SLTEraseAfter(SLTNode* pos);
