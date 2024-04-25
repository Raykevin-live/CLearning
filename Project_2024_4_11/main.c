#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d\n", &a);
	printf("%d\n", a);
	return 0;
}



//函数不安全报错
//scanf函数不会对输入进行判断，可能会导致函数执行出现错误

