#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��������Ϸ
//1.����һ���������
//2.������

void menu()
{
	printf("***************************************\n");
	printf("****       1. play  0. exit       *****\n");
	printf("***************************************\n");
}

void game()
{
	//1.���������
	int ret = 0;
	int guess = 0;
	
//	srand(2);//srand ������Ҫһ����ʱ�仯������ֵ���ſ������ɺ���
	//ʱ�������ʱ����������������������ʼ��
	//time_t time(time_t* time)���� ����һ��long,����i����ʹ��time����ȥ�������ֵ
//	srand((unsigned int)time(NULL));//��ҪƵ�����÷��������������������÷ŵ���������
	ret = rand()%100+1;//����0-100֮������������100ȥȡģ,Ȼ��1
	//printf("%d\n", ret);
	
	//2.������
	while(1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if(guess>ret)
		{
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else 
		{
			printf("��ϲ��,�¶���!\n");
			break;
		}
	}
	printf("������\n");
}



int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//�ŵ�����
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}
	while(input);
		
	return 0;
}
