#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//猜数字游戏
//1.生成一个随机数字
//2.猜数字

void menu()
{
	printf("***************************************\n");
	printf("****       1. play  0. exit       *****\n");
	printf("***************************************\n");
}

void game()
{
	//1.生成随机数
	int ret = 0;
	int guess = 0;
	
//	srand(2);//srand 函数需要一个随时变化的整数值，才可以生成函数
	//时间戳，那时间戳来设置随机数的生成起始点
	//time_t time(time_t* time)函数 返回一个long,所以i可以使用time含糊去产生随机值
//	srand((unsigned int)time(NULL));//不要频繁调用否则生成数不够随机，最好放到主函数中
	ret = rand()%100+1;//生成0-100之间的随机数，用100去取模,然后＋1
	//printf("%d\n", ret);
	
	//2.猜数字
	while(1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if(guess>ret)
		{
			printf("猜大了\n");
		}
		else if(guess<ret)
		{
			printf("猜小了\n");
		}
		else 
		{
			printf("恭喜你,猜对了!\n");
			break;
		}
	}
	printf("猜数字\n");
}



int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//放到这里
	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}
	while(input);
		
	return 0;
}
