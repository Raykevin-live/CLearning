#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


//����ջ�ռ��ַ����
char* GetMemory(void)
{
	char p[] = "hello world";
	return p;//ջ��
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);//�Ƿ�����
	
}

//int main()
//{
//	Test();
//	return 0;
//}

//int* test(void)
//{
//	int* ptr = malloc(100);//����
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();//�ѿռ�������ͷţ���һֱ����
//	return 0;
//}


//��������(C99��׼)
//struct S
//{
//	int n ;
//	int arr[];//���������Ա - δ֪��С�� - �����Ա��С���Ե�����
////	int arr1[0];//������д��������
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));//���������ʹ��
//	
//	ps->n = 100;
//	int i = 0;
//	for(i = 0; i<5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if(ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for(i = 5; i <10; i++)
//	{
//		
//		ps->arr[i] = i;
//	}
//	for(i =0; i<10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//ʹ��ָ�봴���ɵ�����С�Ŀռ�(malloc����)- ������������
struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5*sizeof(int));
	int i = 0;
	for(i =0; i<5; i++)
	{
		ps->arr[i] = i;
		
	}
	for(i = 0; i< 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//������С
	int* ptr = realloc(ps->arr, 10* sizeof(int));
	if(ptr != NULL)
	{
		ps->arr = ptr;		
	}
	for(i = 0; i< 10; i++)
	{
		ps->arr[i] = i;
	}
	for(i = 0; i< 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	
	//�����ͷţ����ͷ�С�ģ����ͷŴ�ģ�������ͷ���㣬���޷��ҵ��ڲ�ռ��ָ��
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	
	return 0;
}
