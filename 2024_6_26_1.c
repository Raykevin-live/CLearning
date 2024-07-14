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
////结构体初始化及结构体变量的返回
////结构体中嵌套结构体的初始化及变量的返回
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

//设置默认对齐数4byte
#pragma pack(4)
struct S3
{
	char c;
	struct S2 s2;
	double d;
};
#pragma pack()
//取消默认对齐数

//结构体内存对齐 
//s3 嵌套结构体的内存对齐
int main()
{
	struct S1 s1 = {0};//将第一个结构列表初始化成0，其他也初始化为0
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

