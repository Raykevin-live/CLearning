#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}


//ָ������ò���
//int main()
//{
//	int a = 0x11223344;//����ʮ������λռһ���ֽ�
//	int* pa = &a;
//	*pa = 0;
////	char* pc = &a;  //��ŵ�ַʱʲô���Ķ����Դ�ŵ��ǽ����ò���ʱֻ�ܲ������ʹ�С���ֽ�
//	//	*pc = 0;
//	printf("%p\n", pa);
//	printf("%d\n", a);
//	
////	printf("%p\n", pc);
//	return 0;
//}


//ָ��Ӽ�����
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//000000000062FE0C
//	printf("%p\n", pa+1);//000000000062FE10
//	
//	printf("%p\n", pc);//000000000062FE0C
//	printf("%p\n", pc+1);//000000000062FE0D
//	return 0;
//}


//���Ͳ�ͬ�������Ӱ��
//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	//char* p = arr;
//	int i = 0;
//	for(i = 0;i<10;i++)
//	{
//		*(p+1) = 1;
//	}
//	return 0;
//}


//int main()
//{
////	int* p;//Ұָ�룬δ��ʼ��
//	
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	for(i =0;i<12;i++)
//	{
//		p++;
//	}//Ұָ�룬Խ�����
//	
//	return 0;
//}

int* test()
{
	int a = 10;
	return &a;
}

int main()
{
	int* p = test();
	*p = 20;//ָ��ռ䱻�ͷŵĵ�ַ
	return 0;
}


