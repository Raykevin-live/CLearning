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
	//��ӡ�к�
	for(i =0; i<= col; i++)
	{
		printf("%d ", i);		
	}
	printf("\n");
	
	for(i = 1; i<=row; i++)//�к�
	{
		printf("%d ", i);//��ӡ�к�
		for(j =1; j<=col; j++)//�к�
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
	mine[x-1][y+1] - 8*'0'; //�ַ�0�����Գˣ��������ascii��ֵ
	
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
		printf("�������Ų��׵�����(�м��ÿո����):> ");
		scanf("%d%d", &x, &y);


		//���������ѱ��Ų�
		if (show[x][y] != '*')
		{
			printf("�������ѱ��Ų�,���������룡\n");
			goto again;
		}

		if(x>=1 && x<= row && y>=1 && y<=col)
		{
			//����Ϸ�
			//1.����
			if(mine[x][y] == '1')
			{
				printf("���ź����㱻ը���ˣ�\n");
				DisplayBoard(mine, row, col);
				break;//����
			}
			else//������
			{
				//���ж��Ƿ����ף���Ҫ��չ
				ExpandBlank(mine, show, x, y);
				
				//��ӡ����
				DisplayBoard(show, row, col);//��ʾ��չ�������
				WIN++;
			}
		}
		else
		{
			printf("��������Ƿ������������룡\n");	
		}
	}
	if(WIN == row*col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
		DisplayBoard(mine, row, col);
	}
}


void ExpandBlank(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	//����x, y��Χ�м�����
	int num = GetMineCount(mine, x, y);

	if (num != 0)
	{
		show[x][y] = num + '0';//ת��Ϊ�ַ�		
	}
	else if(show[x][y] == '*')
	{
		//��Χ�˸���Ϊ�գ������ÿ�
		show[x][y] = ' ';
		WIN++;

		//�ݹ�
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				ExpandBlank(mine, show, i, j);
			}
		}

	}
}

