#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ָ��-ָ��
//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int ret = 0;
//	ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//ģ��ʵ�ֿ⺯��strlen

//size_t MyStrlen(const char* str)
//{
//	assert(str);
// 
//	size_t len = 0;
//	
//	while (*str != '\0')
//	{
//		len++;
//		str++;
//	}
//	return len;
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	size_t len = MyStrlen(str);
//
//	printf("len = %d\n", len);
//	return 0;
//}



//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

void OddToBefore(int* arr, int sz)
{
	int* left = arr;
	int* right = arr + sz -1;
	while (left < right)
	{
		//�����һ��ż��
		if ((left < right) && (*left) % 2 != 0)
		{
			left++;
		}

		//�ұ���һ������
		if ((left < right) && (*right) % 2 != 1)
		{
			right--;
		}

		//���߽���
		int tmp = *left;
		*left = *right;
		*right = tmp;

	}
}

//void OddToBefore(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp;
//	while (left < right)
//	{
//		// ��ǰ�����ҵ�һ��ż�����ҵ���ֹͣ
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//
//		// �Ӻ���ǰ�ң���һ���������ҵ���ֹͣ
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//
//		// ���ż�����������ҵ����������������ݵ�λ��
//		// Ȼ������ң�ֱ������ָ������
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}

int main()
{
	int arr[] = { 2,4,6,8,1,3,7,5,9 };

	int sz = sizeof(arr) / sizeof(arr[0]);
	OddToBefore(arr, sz);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}