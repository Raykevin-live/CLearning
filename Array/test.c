#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//void print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}

//void BubbleSort(int arr[], int sz)
//{
//	int sort = 1;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		sort = 1;
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				sort = 0;
//			}
//		}
//		if (sort == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 2, 1, 5, 4, 3, 9, 8, 7, 6, 0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//print(arr, sz);
//	BubbleSort(arr, sz);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//
//���磺����s1 = AABCD��s2 = BCDAA������1
//
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

//int IsReverse(const char s1[], const char s2[])
//{
//	assert(s1 && s2);
//	assert(strlen(s1) == strlen(s2));
//
//	char ch[20] = { 0 };
//	for (int i = 0; i < strlen(s1); i++)
//	{
//		ch[i] = s1[i];
//	}
//		
//	strncat(ch, ch, strlen(ch));
//	char* p = strstr(ch, s2);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	int ret = IsReverse(s1, s2);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�

//int FindNum(int arr[3][3], int k, int x, int y)
//{
//	int row = 0;
//	int col = y - 1;
//	while (row <= x - 1 && col >= 0)
//	{
//		if (arr[row][col] > k)
//		{
//			col--;
//		}
//		else if (arr[row][col] < k)
//		{
//			row++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9 } };
//	int k = 1;
//	int x = 3;
//	int y = 3;
//
//	//�����Ͳ���
//	int ret = FindNum(arr, k, x, y);
//
//	if (1 == ret)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//
//
//	return 0;
//}



//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

//int main()
//{
//	char thief = '0';
//	char ch[4] = "ABCD";
//	for (int i = 0; i < 4; i++)
//	{
//		thief = ch[i];
//		if (thief == 'A' && thief == 'C' && thief == 'D' && thief != 'D')
//		{
//			break;
//		}
//		else if (thief != 'A' && thief != 'C' && thief == 'D' && thief != 'D')
//		{
//			break;
//		}
//		else if (thief != 'A' && thief == 'C' && thief != 'D')
//		{
//			break;
//		}
//		else if (thief != 'A' && thief == 'C' && thief == 'D')
//		{
//			break;
//		}
//	}
//	printf("The thief is %c\n", thief);
//	
//	return 0;
//}


//����Ļ�ϴ�ӡ�������

int main()
{
	int n = 0;
	int tri[50][50] = {0};
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j || j == 0)
			{
				tri[i][j] = 1;
			}
			else if (i > j)
			{
				tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", tri[i][j]);
		}
		printf("\n");
	}
	return 0;
}