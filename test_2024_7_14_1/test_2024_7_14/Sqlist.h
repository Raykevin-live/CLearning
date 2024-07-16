#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>



#define N 10
#define INIT_CAPACITY 4
typedef int SLDataType;
//��̬˳��� - �������˷ѣ������˲�����

//struct Sqlist
//{
//	int a[N];
//	int size;
//};


//��̬˳��� -- ��������
typedef struct Sqlist
{
	SLDataType* a;
	int size;// ��Ч���ݸ���
	int capacity;// �ռ�����
}SL;

// ��ɾ���
void SLInit(SL* ps);
void SLPrint(SL* ps);
void SLDestory(SL* ps);
void SLPushBack(SL* ps, SLDataType x);// β��
void SLPopBack(SL* ps);// βɾ
void SLPushFront(SL* ps, SLDataType x);// ͷ��
void SLPopFront(SL* ps);// ͷɾ
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);
int SLFind(SL* ps, SLDataType x);
