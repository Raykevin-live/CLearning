#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = -10;
//	return 0;
//}

int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
//	if(1 == *p)
//		return 1;
//	else
//		return 0;//可以简化
	//返回1，小端，返回2，大端
	return *p;
	//	return *(char*)&a;
}

//判断大小端

int main()
{
//	int a = 1;
//	char* p = (char*)&a;

	int ret = check_sys();
	if(ret  == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
