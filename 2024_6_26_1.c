#include <stdio.h>
#include <stddef.h>

//struct T
//{
//	double weight;
//	short age;
//};
//
//struct s
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
////�ṹ���ʼ�����ṹ������ķ���
////�ṹ����Ƕ�׽ṹ��ĳ�ʼ���������ķ���
//int main()
//{
//	struct s s1 = {'c', {55.6, 30}, 100, 3.14, "hello world"};
//	printf("%c %d %lf %s\n", s1.c, s1.a, s1.d, s1.arr);
//	printf("%lf\n", s1.st.weight);
//	return 0;
//}


struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
	
};

//����Ĭ�϶�����4byte
#pragma pack(4)
struct S3
{
	char c;
	struct S2 s2;
	double d;
};
#pragma pack()
//ȡ��Ĭ�϶�����

//�ṹ���ڴ���� 
//s3 Ƕ�׽ṹ����ڴ����
int main()
{
	struct S1 s1 = {0};//����һ���ṹ�б��ʼ����0������Ҳ��ʼ��Ϊ0
	printf("%d\n", sizeof(s1));
	printf("%d\n", offsetof(struct S2, c1));
	printf("%d\n", offsetof(struct S2, c2));
	printf("%d\n", offsetof(struct S2, a));
	struct S2 s2 = {0};
	printf("%d\n", sizeof(s2));
	struct S3 s3 = {0};
	printf("%d\n", sizeof(s3));
	return 0;
}

