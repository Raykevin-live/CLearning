#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>



#define N 10
#define INIT_CAPACITY 4
typedef int SLDateType;
//��̬˳��� - �������˷ѣ������˲�����

//struct Sqlist
//{
//	int a[N];
//	int size;
//};


//��̬˳��� -- ��������
typedef struct Sqlist
{
	SLDateType* a;
	int size;// ��Ч���ݸ���
	int capacity;// �ռ�����
}SL;

// ��ɾ���
void SLInit(SL* ps);
void SLPrint(SL* ps);
void SLDestory(SL* ps);
void SLPushBack(SL* ps, SLDateType x);// β��
void SLPopBack(SL* ps);// βɾ
void SLPushFront(SL* ps, SLDateType x);// ͷ��
void SLPopBack(SL* ps);// ͷɾ

