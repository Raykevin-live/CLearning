#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>



#define N 10
#define INIT_CAPACITY 4
typedef int SLDateType;
//静态顺序表 - 开多了浪费，开少了不够用

//struct Sqlist
//{
//	int a[N];
//	int size;
//};


//动态顺序表 -- 按需申请
typedef struct Sqlist
{
	SLDateType* a;
	int size;// 有效数据个数
	int capacity;// 空间容量
}SL;

// 增删查改
void SLInit(SL* ps);
void SLPrint(SL* ps);
void SLDestory(SL* ps);
void SLPushBack(SL* ps, SLDateType x);// 尾插
void SLPopBack(SL* ps);// 尾删
void SLPushFront(SL* ps, SLDateType x);// 头插
void SLPopBack(SL* ps);// 头删

