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
//�O(N^2)
//���O(N)
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
// O(N^1.3����)
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

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//���O(N^2)
//�O(N^2)
void SelectSort(int* a, int n)
{
	int left = 0, right = n - 1;

	while (left < right)
	{
		int mini = left, maxi = left;
		for (int i = left + 1; i <= right; i++)
		{
			if (a[i] < a[mini])
			{
				mini = i;
			}
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
		}
		Swap(&a[left], &a[mini]);
		//���left��maxi�ص�������������һ�£��������������⣬�����λ���ȥ��
		if (maxi == left)
		{
			maxi = mini;
		}
		Swap(&a[right], &a[maxi]);

		left++;
		right--;
	}

}

void ADjustDown(int* a, int sz, int parent)
{
	int child = parent * 2 + 1;
	while (child < sz)
	{
		//ѡ�����Һ����д��һ��
		//����child+1���ж���ǰ����Ҫ�ȷ������ж�
		//����a[child + 1] > a[child] �������>�� ��С����<
		if (child + 1 < sz && a[child + 1] > a[child])
		{
			//��ط����ܻ�Խ��
			++child;
		}
		//����a[child] > a[parent] �������>�� ��С����<
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int* a, int sz)
{
	//1.���� -- ���ϵ�������   NlogN
	//�������������Ǵ��/С��
	/*for (int i = 1; i < sz; i++)
	{
		ADjustUp(a, i);
	}*/

	//2.���µ�������  N
	//�������������Ǵ��/С��
	for (int i = (sz - 1 - 1) / 2; i >= 0; i--)
	{
		ADjustDown(a, sz, i);
	}

	int end = sz - 1;
	while (end > 0)
	{
		Swap(&a[end], &a[0]);
		ADjustDown(a, end, 0);
		--end;
	}
}

//�O(N^2)
//���O(N)
void BubbleSort(int* a, int n)
{
	int isorder = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n-i; j++)
		{
			if (a[j-1] > a[j])
			{
				Swap(&a[j - 1], &a[j]);
				isorder = 0;
			}
		}
		if (isorder == 1)
		{
			break;
		}
	}
}

//����ȡ��
int GetMidNumi(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[mid] > a[left])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left] > a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else //a[mid] <= a[left]
	{
		if (a[right] < a[mid])
		{
			return mid;
		}
		else if (a[right] > a[left])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
}

//���� Nlog(N)
//hoare�汾
void QuickSort(int* a, int left, int right)
{
	//�ݹ��������
	if (left >= right)
	{
		return;
	}

	int begin = left;
	int end = right;

	////�Ż������ѡkey�� ���keyѡ�����ֵ������Сֵ���ᵼ�����
	//int randi = left + (rand() % (right - left));
	//Swap(&a[left], &a[randi]);

	//�Ż�������ȡ��
	int midi = GetMidNumi(a, left, right);
	Swap(&a[left], &a[midi]);

	int keyi = left;
	//��ط�left ������+1���������һ�������������
	while (left < right)
	{
		//�ұ�����С
		//ע���ڲ�û���ж�left< right
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}
		//����Ҵ�
		while (left < right && a[left] <= a[keyi])
		{
			left++;
		}

		Swap(&a[left], &a[right]);
	}
	Swap(&a[keyi], &a[left]);
	keyi = left;

	//[begin, keyi-1] keyi [keyi+1, end]
	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
}