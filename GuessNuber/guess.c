#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int guess = 0;
//	srand((unsigned int)time(NULL));
//	int asw = rand() % 100 + 1;
//
//	while (guess != asw)
//	{
//		printf("��������µ�����:>");
//		scanf("%d", &guess);
//
//		if (guess > asw)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else if(guess < asw)
//		{
//			printf("��С�ˣ�\n");
//		}
//	}
//	printf("�¶���!\n");	
//
//
//
//	return 0;
//}


//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	int count = 5;
//	while (count)
//	{
//		printf("\n�㻹��%d�λ���\n", count);
//		printf("�������>:");
//		scanf("%d", &guess);
//		if (guess <= r)
//		{
//			printf("�� С ��\n");
//		}
//		else if (guess > r)
//		{
//			printf("�� �� ��\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
//			break;
//		}
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("��ʧ���ˣ���ȷֵ��:%d\n", r);
//	}
//}
//void menu()
//{
//	printf("***********************\n");
//	printf("****** 1. play ******\n");
//	printf("****** 0. exit ******\n");
//	printf("***********************\n");
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, ret = 0;
	ret = scanf("%d%d%d", &a, &b, &c);
	printf("��һ�ζ���������%d\n", ret);
	ret = scanf("%c%d%d", &a, &b, &c);
	printf("�ڶ��ζ���������%d\n", ret);
	

	return 0;
}