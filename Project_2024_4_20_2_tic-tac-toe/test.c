#include "game.h"
//引入自己的头文件


void menu()
{
	printf("*************************\n");
	printf("*****1. play  0. exit****\n");
	printf("*************************\n");
}



//游戏的整个实现
void game()
{
	char ret = 0;
	//数组 -- 存放走出的棋盘信息
	char board[ROW][COL] = {0};//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while(1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
		
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}		
	}
	if(ret == '*')
	{
		printf("你赢了！精彩的博弈\n");
	}
	else if(ret == '#')
	{
		printf("遗憾败北，胜败乃兵家常事，大侠需重新来过\n");
	}
	else
		printf("难分伯仲--势均力敌的对局\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//时间戳
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
		
	}
	while(input);
}

int main()
{
	test();
	return 0;
}
