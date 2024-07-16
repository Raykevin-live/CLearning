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
void SLTPushBack(SLTNode** pphead, SLTDataType x);//β��
void SLTPushFront(SLTNode** pphead, SLTDataType x);//ͷ��

void SLTPopBack(SLTNode** pphead);//βɾ
void SLTPopFront(SLTNode** pphead);//ͷɾ

//���������
SLTNode* SLTListFind(SLTNode* phead, SLTDataType x);
//pos ֮ǰ����
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//pos ֮ǰɾ��
void SListErase(SLTNode** pphead, SLTNode* pos);

//pos֮�����
void SListInsertAfter(SLTNode* pos, SLTDataType x);
//pos֮��ɾ��
void SListEraseAfter(SLTNode* pos);
