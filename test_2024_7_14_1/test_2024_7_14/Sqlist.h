#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>



#define N 10
#define INIT_CAPACITY 4
typedef int SLDataType;
//静态顺序表 - 开多了浪费，开少了不够用

//struct Sqlist
//{
//	int a[N];
//	int size;
//};


//动态顺序表 -- 按需申请
typedef struct Sqlist
{
	SLDataType* a;
	int size;// 有效数据个数
	int capacity;// 空间容量
}SL;

// 增删查改
void SLInit(SL* ps);
void SLPrint(SL* ps);
void SLDestory(SL* ps);
void SLPushBack(SL* ps, SLDataType x);// 尾插
void SLPopBack(SL* ps);// 尾删
void SLPushFront(SL* ps, SLDataType x);// 头插
void SLPopFront(SL* ps);// 头删
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);
int SLFind(SL* ps, SLDataType x);
