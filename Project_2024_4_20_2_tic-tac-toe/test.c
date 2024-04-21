#include "game.h"
//�����Լ���ͷ�ļ�


void menu()
{
	printf("*************************\n");
	printf("*****1. play  0. exit****\n");
	printf("*************************\n");
}



//��Ϸ������ʵ��
void game()
{
	char ret = 0;
	//���� -- ����߳���������Ϣ
	char board[ROW][COL] = {0};//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while(1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
		
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}		
	}
	if(ret == '*')
	{
		printf("��Ӯ�ˣ����ʵĲ���\n");
	}
	else if(ret == '#')
	{
		printf("�ź��ܱ���ʤ���˱��ҳ��£���������������\n");
	}
	else
		printf("�ѷֲ���--�ƾ����еĶԾ�\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ʱ���
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
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
