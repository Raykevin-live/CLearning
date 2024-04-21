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

int get_mine_count(char mine[ROWS][COLS], int x, int y)
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

//void Set_space(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y)
//{
//	
//	int count1 = get_mine_count(mine, x-1, y);
//	int count2 = get_mine_count(mine, x-1, y-1);
//	int count3 = get_mine_count(mine, x-1, y+1);
//	int count4 = get_mine_count(mine, x, y-1);
//	int count5 = get_mine_count(mine, x, y+1);
//	int count6 = get_mine_count(mine, x+1, y-1);
//	int count7 = get_mine_count(mine, x+1, y);
//	int count8 = get_mine_count(mine, x+1, y+1);
//	if()
//}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	
	int win = 0;
	while(win<row*col - EASY_COUNT)
	{
		printf("请输入排查雷的坐标:> ");
		scanf("%d%d", &x, &y);
		if(x>=1 && x<= row && y>=1 && y<=col)
		{
			//坐标合法
			//1.踩雷
			if(mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//不是雷
			{
				int count = 0;
				//计算x, y周围有几个雷
				count = get_mine_count(mine, x, y);
//				if(count == 0)
//				{
//					Set_space(show, x, y);
//					DisplayBoard(mine , show, row, col);
//					win+=row*col;
//				}
//				else
//				{
					show[x][y] = count + '0';//转化为字符
					DisplayBoard(show, row, col);
					win++;
//				}
			
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入！\n");	
		}
	}
	if(win == row*col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功！\n");
		DisplayBoard(mine, row, col);
	}

}
