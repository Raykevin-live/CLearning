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
//		return 0;//���Լ�
	//����1��С�ˣ�����2�����
	return *p;
	//	return *(char*)&a;
}

//�жϴ�С��

int main()
{
//	int a = 1;
//	char* p = (char*)&a;

	int ret = check_sys();
	if(ret  == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
