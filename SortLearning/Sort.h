#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//ʱ������

void PrintArray(int* a, int n);

//��������
void InsertSort(int* a, int n);
void ShellSort(int* a, int n);

//ѡ������
void SelectSort(int* a, int n);
void ADjustDown(int* a, int sz, int parent);
void HeapSort(int* a, int n);

//��������
void BubbleSort(int* a, int n);
void QuickSort(int* a, int left, int right);