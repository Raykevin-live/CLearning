#include <stdio.h>
#include <stddef.h>
//����offsetof ����
 
//�ú�ʵ��offsetof
typedef struct S
{
	char c1;
	int a;
	char c2;
}S;

#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)//����0��ַ����������ʾƫ����

int main()
{
	printf("%d\n", OFFSETOF(S, c1));
	printf("%d\n", OFFSETOF(S, a));
	printf("%d\n", OFFSETOF(S, c2));
	
	return 0;
}
