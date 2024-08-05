#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�ִ�ð������
//void bubble_sort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
	//int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	////����
	//int sz = sizeof(arr) / sizeof(arr[0]);

	//print_arr(arr, sz);

	//bubble_sort(arr, sz);
	//print_arr(arr, sz);
	//return 0;
//}



//qsort
// 
//void qsort(void* base, size_t num, size_t size,
//    int (*compar)(const void*, const void*));


void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//1.ʹ��qsort������������arr

int cmp_int(const void* e1, const void* e2)
{
	//����
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int arr[10] = { 3, 1, 9, 8, 4, 0, 2, 6, 7 ,5};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��qsort������������
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

//2.ʹ��qsort����ṹ��

typedef struct S 
{
	char name[20];
	int age;
}stu;

//�Ƚ������ṹ�����
int cmp_stu_by_age(const void* e1, const void* e2)
{
	//����
	return (*(stu*)e1).age - (*(stu*)e2).age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//����
	return strcmp((*(stu*)e1).name, (*(stu*)e2).name);
}

void test2()
{
	stu s[3] = { {"zhangsan", 20}, {"lisi", 10}, {"wangwu", 30}};
	int sz = sizeof(s) / sizeof(s[0]);
	//ʹ��qsort����ṹ������
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}



//ʵ��һ�������ײ㻹��ʹ��ð�����򣬵��ǿ��������������͵�����

void Swap(char* buf1, char* buf2, size_t width)
{
	//ֻ�ܰ�һ���ֽ�һ���ֽ������
	for (int i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	for (int i = 0; i < num - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < num - 1 - i; j++)
		{
			//�����޷�ȷ���Ǻ������ͣ�����ʹ����С�����ͣ���һ���ܺõ�˼��
			//����������͵ı�̳�Ϊ���ͱ�̣�һ��ʹ��void���ͣ����з��ͱ��
			//�����Ǵ���0������Ĭ��������
			if (cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
			{
				//��������Ԫ�ص�ַ�Ϳ��
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);

				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

//����ð������
void test3()
{
	int arr[] = { 7, 3, 2, 4, 6, 5, 1, 0, 9, 8 };
	//����
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
	return 0;
}


int main()
{
	test3();
	return 0;
}