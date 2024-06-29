#include <stdio.h>


//声明一个结构体

struct Stu
{
	char name[20];
	char tele[12];
	char sex[10];
	int age;
}s4, s5, s6;//这里创建的也是全局结构体变量

struct 
{
	int a;
	char b;
	float c;	
}x;//匿名结构体


struct 
{
	int a;
	char b;
	float c;
}* px;//结构体指针变量

//int main()
//{
//	px = &x;//这种写法是非法的
//	return 0;
//}


struct Stu s3;//全局结构体变量

//int main()
//{
//	//创建结构体变量
//	
//	struct Stu s1;
//	struct Stu s2;
//	
//	return 0;
//}

//结构体的自引用
//struct Node
//{
//	int date;
//	struct Node* next;
//};//定义数据链表中的结点

//结构体重命名（自引用一定要加结构体标签防止出错）
typedef struct Node 
{
	int date;
	struct Node* next;
}Node;

////注意下面这种写法是错误的
//typedef struct 
//{
//	int date;
//	Node* next;
//}Node;//由于匿名指针没有结构体标签，而Node重命名之前，就使用了Node导致错误

int main()
{
	struct Node n1;
	Node n2;//这两种都可以
	
	return 0;
}
