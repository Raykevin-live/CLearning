#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//时间种子

void PrintArray(int* a, int n);

//插入排序
void InsertSort(int* a, int n);
void ShellSort(int* a, int n);

//选择排序
void SelectSort(int* a, int n);
void ADjustDown(int* a, int sz, int parent);
void HeapSort(int* a, int n);

//交换排序
void BubbleSort(int* a, int n);
void QuickSort(int* a, int left, int right);