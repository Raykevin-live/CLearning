#include <stdio.h>
#include "add.h"//自己的头文件用双引号

//函数声明，一般放进.h文件里
//void Add(int*);


int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	
	return 0;
}


////函数定义,一般放到.c文件
//void Add(int* num)
//{
//	(*num)++;//++优先级比较高
//}
