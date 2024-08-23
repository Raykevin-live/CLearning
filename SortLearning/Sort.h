#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define K 3
#define RADIX 10

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
int PartSort1(int* a, int left, int right);//hoare��
int PartSort2(int* a, int left, int right);//�ڿӰ�
int PartSort3(int* a, int left, int right);//ǰ��ָ��
void QuickSort(int* a, int left, int right);
void QuickSortPlus(int* a, int left, int right);//��·�����Ż�

//�ķǵݹ�
void QuickSortNonR(int* a, int left, int right);

//�鲢����
void _MergeSort(int* a, int left, int right, int* tmp);
void MergeSort(int* a, int n);
//�ķǵݹ�
void MergeSortNonR(int* a, int n);

//�ǱȽ�����
//��������
void CountSort(int* a, int n);
//��������
void RadixSort(int* a, int left, int right);
