#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

//����
//O(N^2)
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		int end = i-1;
		int tmp = a[i];
		//��tmp���뵽[0, end]�����У���������
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}	
}

//��������
//1.Ԥ����
void ShellSort(int* a, int n)
{
	//1.Ԥ����
	int gap = n;
	while (gap > 1)
	{
		//������뱣֤gap���һ����1
		//gap /= 2;
		gap = gap / 3 + 1;

		//��1������������һ������
		/*for (int j = 0; j < gap; j++)
		{
			for (int i = gap+j; i < n; i += gap)
			{
				int end = i - gap;
				int tmp = a[end + gap];

				while (end >= 0)
				{
					if (tmp < a[end])
					{
						a[end + gap] = a[end];
						end -= gap;
					}
					else
					{
						break;
					}
				}
				a[end + gap] = tmp;
			}
		}*/
	//��2����һ��ѭ��������ʱ���Ӷ���һ���ģ������Ƕ��鲢��
		for (int i = gap; i < n; i++)
		{
			int end = i - gap;
			int tmp = a[end + gap];

			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}	
}