#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"


//int main()
//{
//	HP hp;
//	HeapInit(&hp);
//	HeapPush(&hp, 4);
//	HeapPush(&hp, 18);
//	HeapPush(&hp, 42);
//	HeapPush(&hp, 12);
//	HeapPush(&hp, 5);
//	HeapPush(&hp, 1);
//
//	int k;
//	scanf("%d", &k);
//	//��ӡǰk����
//	while (!HeapEmpty(&hp) && k--)
//	{
//		printf("%d ", HeapTop(&hp));
//		HeapPop(&hp);
//	}
//
//	printf("\n");
//
//	return 0;
//}

//������

//�����򣬽����
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
	for (int i = (sz - 1 -1) / 2; i >= 0; i--)
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

//int main()
//{
//	int a[10] = { 2, 1, 5, 4, 7, 9, 8, 3, 6, 0};//����������
//	int sz = sizeof(a) / sizeof(a[0]);
//	HeapSort(a, sz);
//
//	return 0;
//}



//TOP - K���⣺�������ݽ����ǰK������Ԫ�ػ�����С��Ԫ�أ�һ����������������Ƚϴ�
//���磺רҵǰ10��������500ǿ����������Ϸ��ǰ100�Ļ�Ծ��ҵȡ�
//����Top - K���⣬���뵽�����ֱ�ӵķ�ʽ��������
// ���ǣ�����������ǳ�������Ͳ�̫��ȡ��(�������ݶ�����һ����ȫ�����ص��ڴ���)��
// ��ѵķ�ʽ�����ö������������˼·���£�
	//1. �����ݼ�����ǰK��Ԫ��������
	//ǰk������Ԫ�أ���С��
	//ǰk����С��Ԫ�أ��򽨴��
	//2. ��ʣ���N - K��Ԫ��������Ѷ�Ԫ�����Ƚϣ�
	// ���������滻�Ѷ�Ԫ�ؽ�ʣ��N - K��Ԫ��������Ѷ�Ԫ�ر���֮�󣬶���ʣ���K��Ԫ�ؾ��������ǰK����С��������Ԫ�ء�



void PrintTopk(const char* file, int k)
{
	//1.���� -- ��a�е�ǰk��Ԫ�ؽ�С��
	int* topk = (int*)malloc(sizeof(int) * k);
	assert(topk);

	FILE* fout = fopen(file, "r");
	if (fout == NULL)
	{
		perror("fopen error");
		return;
	}

	//����ǰk�����ݽ�С��
	for (int i = 0; i < k; i++)
	{
		fscanf(fout, "%d", &topk[i]);
	}

	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		ADjustDown(topk, k, i);
	}

	//2.��ʣ��n-k��Ԫ��������Ѷ�Ԫ�ؽ������������滻
	int val = 0;
	int ret = fscanf(fout, "%d", &val);
	while (ret != EOF)
	{
		if (val > topk[0])
		{
			topk[0] = val;
			ADjustDown(topk, k, 0);
		}
		ret = fscanf(fout, "%d", &val);
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d ", topk[i]);
	}
	printf("\n");


	free(topk);
	topk = NULL;
}

void CreatNData()
{
	//������
	int n = 10000;
	srand((unsigned int)time(0));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen error");
		return;
	}

	for (size_t i = 0; i < n; ++i)
	{
		int x = rand() % 10000;
		fprintf(fin, "%d\n", x);
	}
	fclose(fin);
}

int main()
{
	// �ڲ���ʱ���������е�һ����������������ݣ�
	// Ȼ���޸�k�����ݣ������еڶ������ڼ��Ӵ��ڹ۲�
	CreatNData();
	PrintTopk("data.txt", 10);
		
	return 0;
}