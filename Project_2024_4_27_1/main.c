#include <stdio.h>


//int Add(int x, int y)
//{
//	return x+y;
//}
////����ָ�룬ָ������ָ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//	int (*pa)(int , int) = Add;
//	printf("%d\n", (*pa)(2, 3));//(*pa)�Ǻ�����
//	printf("%d\n", pa(2, 3));//������û��*���ǿ��Եģ�ֱ��ʹ��pa�൱��Add��Ҳ����˵ƽʱʹ�ú����ǵ��������ĵ�ַ
//	return 0;
//}






void (*    signal(int , void(*)(int))  )(int);




int Add(int x, int y)
{
	return x+y;
}

int Sub(int x, int y)
{
	return x-y;
}

int Mul(int x, int y)
{
	return x*y;
}

int Div(int x, int y)
{
	return x/y;
}

//int main()
//{
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	int (*parr[4])(int, int) = {Add, Sub, Mul, Div};//����ָ�������
//	int i =0;
//	for(i =0; i<4;i++)
//	{
//		printf("%d\n", parr[i](2,3));
//	}
//	
//	return 0;
//}



char* my_strcpy(char* dest, const char* src);
//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//2.дһ������ָ�����飬�ܹ����4��my_strcpy�����ĵ�ַ

//int main()
//{
//	char* (*pf)(char*,const char*);
//	char*(*pfarr[4])(char*, char*);
//	return 0;
//}


//������,ָ�������ʹ��
void menu()
{
	printf("****************************\n");
	printf("****1.Add  2.Sub ***********\n");
	printf("****3.Mul  4.Div ***********\n");
	printf("****    0.Exit   ***********\n");
	printf("****************************\n");
}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[])(int, int) = {0, Add, Sub, Mul, Div};//������ʱ�����µĺ���
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if(input>=1 && input <=4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(0 == input)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//		
//	}
//	while(input);
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch(input)
//{
//case 1:
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", Add(x, y));
//	break;
//case 2:
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", Sub(x, y));
//	break;
//case 3:
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", Mul(x, y));
//	break;
//case 4:
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", Div(x, y));
//	break;
//case 0:
//	printf("�˳�\n");
//	break;
//default:
//	printf("ѡ�����\n");
//	break;
//}
//	}
//	while(input);
//	return 0;
//}


//�����������
//��װ����
//�ص�����
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch(input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}
//	while(input);
//	return 0;
//}



//int main()
//{
//	int arr[10] = {0};
//	int (*p)[10] = &arr;//ȡ������ĵ�ַ
//	
//	int (*pfArr[4])(int , int);//pfArr��һ������ - ����ָ�������
//	int (*(*ppfArr)[4])(int ,int) = &pfArr;
//	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿһ��Ԫ�ض���һ������ָ��int(*)(int , int)
//	return 0;
//}


//�ص���������
//void print(char*str)
//{
//	printf("hehe:%s", str);
//}
//
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("kevin");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}




//qsort ���������������͵�����
int main()
{
	//ð��������
	//ð������ֻ��������������
	return 0;
}
