#include <stdio.h>

//int main()
//{
//	const char* p = "abcdef";
// //	*p = 'w';//������д���Ǵ����
//	printf("%s\n", p);
//	return 0;
//}//�� abcdef �����ַ��ĵ�ַ�浽p��


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//�����ַ����������Ա��޸�
//	char* p2 = "abcdef";
//	
//	if(p1 == p2)//ֻ���a����ַ��ĵ�ַ��������һ����
//	{
//		printf("hehe\n");
//	}
//	else{
//		printf("haha\n");
//	}
//	return 0;
//	
//	
////	if(arr1 == arr2)//��ַ��һ��
////	{
////		printf("hehe\n");
////	}
////	else{
////		printf("haha\n");
////	}
////	return 0;
//}

//int main()
//{
//	int arr[10] = {0};//��������
//	char ch[5] = {0};//�ַ�����
//	int* parr[4];//�������ָ������� -- ָ������
//	char* pch[5];//����ַ�ָ������� -- ָ������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = {&a, &b, &c, &d};
//	int i = 0;
//	for(i = 0;i< 4;i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//ָ������
//int main()
//{
//	int arr1[] = {1, 2, 3, 4, 5};
//	int arr2[] = {2, 3, 4, 5, 6};
//	int arr3[] = {3, 4, 5, 6, 7};
//	int* parr[] = {arr1, arr2, arr3};
//	
//	int i = 0;
//	for(i = 0;i<3;i++)
//	{
//		int j = 0;
//		for(j = 0;j<5;j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	int* p = NULL;//����ָ�룬ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
//	char* pc = NULL;//�ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	//����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//	
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int(*pa)[10] = &arr;//����ĵ�ַ
//	// *pa ˵��pa�Ǹ�ָ�룬[10]˵��ָ���������10��Ԫ��
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}//����ָ��





////�������������ʽ
//void print1(int arr[3][5], int x ,int y)
//{
//	int i = 0;
//	int j= 0;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//}
//
////������ָ�����ʽ
//void print2(int (*p)[5], int x, int y)
//{
//	int i =0;
//	for(i=0;i<x;i++)
//	{
//		int j = 0;
//		for(j=0;j<y;j++)
//		{
//			printf("%d ", *(*(p+i)+j));//p+i���������У�*(p+i)��arr�ĵ�ַ
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6,},{3,4,5,6,7}};
//	
//	print1(arr,3,5);//arr ������������Ԫ�ص�ַ - ��һ�еĵ�ַ
//	print2(arr,3,5);
//	
//	return 0;
//}





//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int* arr)
//{}
//void test2(int* arr[20])
//{}
//void test2(int* *arr)
//{}//�⼸�ִ��ζ��ǿ��Ե�
//
//int main()
//{
//	int arr[10] = {0};
//	int* arr2[20] = {0};
//	test(arr);
//	test2(arr2);
//	return 0;
//}




//��ά���鴫��,����һ�еĵ�ַ
void test(int arr[3][5])
{}
void test1(int arr[][5])//�п���ʡ�ԣ��в�����ʡ��
{}

void test2(int (*arr)[5])//ָ�������ָ��
{}
//������ʽ

int main()
{
	int arr[3][5] = {0};
	
	test(arr);
	test1(arr);
	test2(arr);
	return 0;
}

