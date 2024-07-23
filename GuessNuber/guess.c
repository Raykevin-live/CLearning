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
//		printf("请输入你猜的数字:>");
//		scanf("%d", &guess);
//
//		if (guess > asw)
//		{
//			printf("猜大了！\n");
//		}
//		else if(guess < asw)
//		{
//			printf("猜小了！\n");
//		}
//	}
//	printf("猜对了!\n");	
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
//		printf("\n你还有%d次机会\n", count);
//		printf("请猜数字>:");
//		scanf("%d", &guess);
//		if (guess <= r)
//		{
//			printf("猜 小 了\n");
//		}
//		else if (guess > r)
//		{
//			printf("猜 大 了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("你失败了，正确值是:%d\n", r);
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
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
	printf("第一次读入数量：%d\n", ret);
	ret = scanf("%c%d%d", &a, &b, &c);
	printf("第二次读入数量：%d\n", ret);
	

	return 0;
}