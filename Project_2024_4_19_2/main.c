#include <stdio.h>

//�ж��Ƿ�������
int is_leap_year(int y)
{
	if((0==y%4 && 0 != y%100)||(0 == y%400))
	{
		return 1;
	}
	return 0;
}

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year= 1000;year<=2000;year++)
//	{
//		if(1==is_leap_year(year))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount= %d\n", count);
//	return 0;
//}

int binary_search(int arr[], int k, int sz)//�������ʱΪ�˽�ʡ�ռ䣬ֻ���ݵ�һ��Ԫ�صĵ�ַ
{
	//���Դ�������֮�󲻿�����ʹ��sizeof
	int left = 0;
	int right = sz - 1;
	
	
	while(left<=right)//����ʱ�������һ��ֵ
	{
		int mid = (left + right)/2;
		if(arr[mid] < k)
		{
			left = mid +1;
		}
		else if(arr[mid] > k)
		{
			right = mid -1;
		}
		else
			return mid;
	}
	return -1;
}

int main()
{
	//���ֲ��ң��ҵõ���������������±꣬�Ҳ�������-1��
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if(-1 == ret)
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�ҵ������±�Ϊ:>%d\n", ret);	
	}
	return 0;
}
