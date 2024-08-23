#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define K 3
#define RADIX 10

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
int PartSort1(int* a, int left, int right);//hoare版
int PartSort2(int* a, int left, int right);//挖坑版
int PartSort3(int* a, int left, int right);//前后指针
void QuickSort(int* a, int left, int right);
void QuickSortPlus(int* a, int left, int right);//三路划分优化

//改非递归
void QuickSortNonR(int* a, int left, int right);

//归并排序
void _MergeSort(int* a, int left, int right, int* tmp);
void MergeSort(int* a, int n);
//改非递归
void MergeSortNonR(int* a, int n);

//非比较排序
//计数排序
void CountSort(int* a, int n);
//基数排序
void RadixSort(int* a, int left, int right);
