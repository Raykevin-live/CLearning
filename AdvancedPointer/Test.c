#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ʹ�ú���ָ������ʵ��ת�Ʊ�
//��������ʵ��



void menu()
{
	printf("*********************\n");
	printf("**** 1.add    2.sub *\n");
	printf("**** 3.mul    4.div *\n");
	printf("**** 0.esc          *\n");
	printf("*********************\n");
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

//�鷳�汾
//int main()
//{
//	int input = 0;	
//	int x = 0, y = 0;
//	int ret = 0;
//	do
//	{
//		menu();		
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("�������������������м��ÿո����:>\n");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("�������������������м��ÿո����:>\n");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("�������������������м��ÿո����:>\n");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("�������������������м��ÿո����:>\n");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳��ɹ�\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��!\n");
//			break;
//		}
//	} while (input);
//
//
//	return 0;
//}


//����ָ������ʵ��ת�Ʊ�
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	int ret = 0;
//	int (*calcu[5])(int, int) = { 0, add, sub, mul, div };
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("�������������������м��ÿո����:>\n");
//			scanf("%d %d", &x, &y);
//
//			ret = calcu[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳��ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
//		}
//		
//	} while (input);
//
//
//	return 0;
//}

//�ص�����ʵ��

void Calcu(int (*cal)(int, int))
{
	int x = 0, y = 0;
	printf("�������������������м��ÿո����:>\n");
	scanf("%d %d", &x, &y);
	int ret = cal(x, y);
	printf("%d\n", ret);
}
int main()
{
	int input = 0;

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calcu(add);
			break;
		case 2:
			Calcu(sub);
			break;
		case 3:
			Calcu(mul);
			break;
		case 4:
			Calcu(div);
			break;
		case 0:
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);


	return 0;
}