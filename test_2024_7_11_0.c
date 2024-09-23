#include <stdio.h>
#include <stddef.h>
//引用offsetof 函数
 
//用宏实现offsetof
typedef struct S
{
	char c1;
	int a;
	char c2;
}S;

#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)//赋给0地址，更容易显示偏移量

int main()
{
	printf("%d\n", OFFSETOF(S, c1));
	printf("%d\n", OFFSETOF(S, a));
	printf("%d\n", OFFSETOF(S, c2));
	
	return 0;
}
