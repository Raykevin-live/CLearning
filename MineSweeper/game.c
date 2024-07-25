#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for(i = 0;i<rows;i++)
	{
		for(j =0;j<cols;j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for(i =0; i<= col; i++)
	{
		printf("%d ", i);		
	}
	printf("\n");
	
	for(i = 1; i<=row; i++)//行号
	{
		printf("%d ", i);//打印行号
		for(j =1; j<=col; j++)//列号
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	//'3' - '0' = 3
	//'1' - '0' = 1
	return mine[x-1][y] + 
	mine[x-1][y-1] + 
	mine[x][y-1] + 
	mine[x+1][y-1] + 
	mine[x+1][y] + 
	mine[x+1][y+1] + 
	mine[x][y+1] + 
	mine[x-1][y+1] - 8*'0'; //字符0，可以乘，计算的是ascii码值
	
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while(count)
	{
		x = (rand()%row) + 1;//1-9
		y = (rand()%col) + 1;
		if(board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

static int WIN = 0;

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	
	WIN = 0;
	while(WIN <row*col - EASY_COUNT)
	{
		again:
		printf("请输入排查雷的坐标(中间用空格隔开):> ");
		scanf("%d%d", &x, &y);


		//输入坐标已被排查
		if (show[x][y] != '*')
		{
			printf("此坐标已被排查,请重新输入！\n");
			goto again;
		}

		if(x>=1 && x<= row && y>=1 && y<=col)
		{
			//坐标合法
			//1.踩雷
			if(mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(mine, row, col);
				break;//跳出
			}
			else//不是雷
			{
				//先判断是否无雷，需要扩展
				ExpandBlank(mine, show, x, y);
				
				//打印棋盘
				DisplayBoard(show, row, col);//显示扩展后的棋盘
				WIN++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入！\n");	
		}
	}
	if(WIN == row*col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功！\n");
		DisplayBoard(mine, row, col);
	}
}


void ExpandBlank(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	//计算x, y周围有几个雷
	int num = GetMineCount(mine, x, y);

	if (num != 0)
	{
		show[x][y] = num + '0';//转化为字符		
	}
	else if(show[x][y] == '*')
	{
		//周围八个格都为空，则将它置空
		show[x][y] = ' ';
		WIN++;

		//递归
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				ExpandBlank(mine, show, i, j);
			}
		}

	}
}

