#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"
#include "Stack.h"
#include "Queue.h"

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

//����ȡ�У�������������
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

//���� O(Nlog(N)) ����O(N^2)
//hoare�汾
int PartSort1(int* a, int left, int right)
{

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
	//����λ��һ����keyС
	Swap(&a[keyi], &a[left]);
	keyi = left;

	return keyi;
}

//�ڿӰ�
int PartSort2(int* a, int left, int right)
{
	////�Ż������ѡkey�� ���keyѡ�����ֵ������Сֵ���ᵼ�����
	//int randi = left + (rand() % (right - left));
	//Swap(&a[left], &a[randi]);

	//�Ż�������ȡ��
	int midi = GetMidNumi(a, left, right);
	Swap(&a[left], &a[midi]);

	int key = a[left];
	int pit = left;
	//��ط�left ������+1���������һ�������������
	while (left < right)
	{
		//�ұ�����С
		//ע���ڲ�û���ж�left< right
		while (left < right && a[right] >= key)
		{
			right--;
		}
		a[pit] = a[right];
		pit = right;
		//����Ҵ�
		while (left < right && a[left] <= key)
		{
			left++;
		}

		a[pit] = a[left];
		pit = left;
	}
	//����λ��һ����keyС
	a[pit] = key;

	return pit;
}

//ǰ��ָ�뷨
int PartSort3(int* a, int left, int right)
{
	int midi = GetMidNumi(a, left, right);
	if (midi != left)
	{
		Swap(&a[left], &a[midi]);
	}

	int keyi = left;

	int prev = left;
	int cur = left + 1;
			
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
		{
			Swap(&a[prev], &a[cur]);
		}
		
		++cur;
	}
	//����prevֱ�ӻ��ͺ��ˣ����ý���
	Swap(&a[prev], &a[keyi]);
	keyi = prev;
	
	return keyi;
}

void QuickSort(int* a, int left, int right)
{
	//�ݹ��������
	if (left >= right)
	{
		return;
	}

	//С�����Ż� -- С����ʹ�ò�������
	//������ֲ���̫�󣬷���û������
	if ((right - left + 1) > 10)
	{
		int keyi = PartSort3(a, left, right);

		//[begin, keyi-1] keyi [keyi+1, end]

		QuickSort(a, left, keyi - 1);
		QuickSort(a, keyi+1, right);
	}
	else
	{
		InsertSort(a + left, right - left +1);
	}
}

void QuickSortNonR(int* a, int left, int right)
{
	ST st;
	STInit(&st);
	STPush(&st, right);
	STPush(&st, left);
	while (!STEmpty(&st))
	{
		int begin = STTop(&st);
		STPop(&st);
		int end = STTop(&st);
		STPop(&st);

		int keyi = PartSort3(a, begin, end);
		if (end > keyi + 1)
		{
			STPush(&st, end);
			STPush(&st, keyi + 1);
		}
		if (begin < keyi - 1)
		{
			STPush(&st, keyi - 1);
			STPush(&st, begin);
		}
	}
	STDestroy(&st);
}


//�鲢����O(NlogN)
void _MergeSort(int* a, int begin, int end, int* tmp)
{
	//�ݹ��������
	if (begin >= end)
	{
		return;
	}
	int mid = (begin + end) / 2;
	//mid���Ƶݹ�
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);

	//[begin, mid] [mid+1, end]�鲢
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	//iΪÿ��ջ֡�еĶ�������������ÿһ�εĹ鲢
	int i = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		//begin1<=begin2�����������ȶ�
		if (a[begin1] <= a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
		
	}
	//û�ŵ���ֱ�ӽӵ�����
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}
	//���ǵ�ԭ����
	memcpy(a+begin, tmp+begin, sizeof(int)*(end-begin+1));
}

void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;
	}
	_MergeSort(a, 0, n - 1, tmp);

	free(tmp);
	tmp = NULL;
}

void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;
	}

	int gap = 1;//gap�ǹ鲢�����У�ÿ�����ݵĸ���
	while (gap < n)
	{

		//һ����2*gap������
		for (int i = 0; i < n; i += 2*gap)
		{
			//�߽����
			//[begin1, end1], [begin2, end2]
			//[i, i+gap-1], [i+gap, i+2*gap -1]
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + gap * 2 - 1;

			//�߽�����Խ�������������߽�
			// 	��������ֽ�Ϊ�����⣺���ദ��
				//1.end1Խ�磿���鲢
				//2.end1û��Խ�磬begin2Խ���ˣ���1һ������
				//3.end1��beginû��Խ�磬end2Խ���ˣ� �����鲢������

			//if (end1 >= n)
			//{
			//	end1 = n - 1;
			//	/*begin2 = n - 1;//���������Ǵ����
			//	end2 = n - 1;*/
			//ȫ���źã��ٿ���ʱ����Ҫ����Ϊ�����ڵ����䣬����ֱ�ӿ���ʱ�������
			//	begin2 = n;
			//	end2 = n - 1;
			//}
			//else if (begin2 >= n)
			//{
			//	begin2 = n;
			//	end2 = n - 1;
			//}
			//else if (end2>=n)
			//{
			//	end2 = n - 1;
			//}
			//�鲢һ�Σ�����һ�Σ��Ƽ���
			if (end1 >= n || begin2 >= n)
			{
				break;
			}
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			//�鲢
			int j = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				//begin1<=begin2ʱ���������ȶ�
				if (a[begin1] <= a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}
			//û�ŵ���ֱ�ӽӵ�����
			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}
			//���ݸ��ǵ�ԭ����
			memcpy(a + i, tmp + i, sizeof(int) * (end2 - i + 1));
		}
		// ���Ϊgap�Ķ������ݣ��鲢���ֱ��һ�ο���
		//memcpy(a , tmp , sizeof(int) * n);

		gap *= 2;//gap���Ʊ���
	}
	free(tmp);
	tmp = NULL;
}

//�������� O(N+range)
// �ռ临�Ӷȣ�O(range)
// �ʺϷ�Χ�����ҷ�Χ������������������	������Ҳ����(���ӳ��)
// ���ʺϷ�Χ��ɢ���߷��������ݵ�����
void CountSort(int* a, int n)
{
	//�ҷ�Χ
	int min = a[0], max = a[0];

	for (int i = 0; i < n; ++i)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	int range = max - min + 1;
	int* countA = (int*)calloc(range, sizeof(int));//��ʼ��Ϊ0
	if (countA == NULL)
	{
		perror("malloc fail");
		return;
	}

	//����
	for (int i = 0; i < n; i++)
	{
		countA[a[i]-min]++;
	}
	// ����
	int j = 0;
	for (int i = 0; i < range; i++)
	{
		while (countA[i]--)
		{
			a[j++] = min + i;
		}
	}
	free(countA);
	return;
}


int GetKey(int value, int k)
{
	int key = 0;
	while (k >= 0)
	{
		key = value % 10;
		value /= 10;
		--k;
	}
	return key;
}

void Distribute(int* a, int left, int right, int k, Queue* Qu[10])
{
	for (int i = left; i <= right; ++i)
	{
		int key = GetKey(a[i], k);
		//��� ,д����
		QueuePush(Qu[key], a[i]);		
	}
}

void Collect(int* a, Queue* Qu[10])
{
	int k = 0;
	for (int i = 0; i < RADIX; i++)
	{
		while (!QueueEmpty(Qu[i]))
		{
			a[k++] = QueueFront(Qu[i]);
			QueuePop(Qu[i]);
		}
	}
}

//���������Ƚ��ȳ��ö���
void RadixSort(int* a, int left, int right)
{
	Queue q0, q1, q2, q3, q4, q5, q6, q7, q8, q9;
	//��ʼ��
	QueueInit(&q0);
	QueueInit(&q1);
	QueueInit(&q2);
	QueueInit(&q3);
	QueueInit(&q4);
	QueueInit(&q5);
	QueueInit(&q6);
	QueueInit(&q7);
	QueueInit(&q8);
	QueueInit(&q9);
	//������
	Queue* Qu[10] = {&q0 ,&q1, &q2, &q3, &q4, &q5, &q6, &q7, &q8, &q9 };

	for (int i = 0; i < K; i++)
	{
		//�ַ�����
		Distribute(a, left, right, i, Qu);
		//��������
		Collect(a, Qu);
	}

	QueueDestory(&q0);
	QueueDestory(&q1);
	QueueDestory(&q2);
	QueueDestory(&q3);
	QueueDestory(&q4);
	QueueDestory(&q5);
	QueueDestory(&q6);
	QueueDestory(&q7);
	QueueDestory(&q8);
	QueueDestory(&q9);
}