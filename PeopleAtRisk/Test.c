#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct array
{
	int _x;
	int _y;
}array;

bool InArea(const int XL, const int YD, const int XR, const int YU, int x, int y)
{
	return x >= XL && x <= XR && y >= YD && y <= YU;
}

int main()
{
	int n, k, t, xl, yd, xr, yu;

	scanf("%d%d%d%d%d%d%d", &n, &k, &t, &xl, &yd, &xr, &yu);
	int i, j;

	int kcount = 0;
	int passcount = 0;
	int pass = 0;
	int staycount = 0;

	//malloc ģ���ά������ϰ��������ά�ṹ������ 
	array** People = (array**)malloc(sizeof(array*) * 10);
	if (People == NULL)
	{
		perror("malloc People fail");
		return 1;
	}

	for (i = 0; i < 10; i++)
	{
		People[i] = (array*)malloc(sizeof(array) * 20);
		if (People[i] == NULL)
		{
			perror("malloc PeoPle[i] fail");
			for (j = 0; j < i; j++)
			{
				free(People[j]);
			}
			return 1;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < t; j++)
		{
			scanf("%d %d", &People[i][j]._x, &People[i][j]._y);
		}
	}

	for (i = 0; i < n; i++)
	{
		int counttmp = 0; // ���ڼ����������������ڲ��ĸ��� 
		int pass = 0;//����Сѭ���ⲿ�ж�passcount �Ƿ�++ 
		for (j = 0; j < t; j++)
		{
			if (InArea(xl, yd, xr, yu, People[i][j]._x, People[i][j]._y))
			{
				pass = 1;
				//��ǰ����������ڲ�����+1���������´�0��ʼ�� 
				if (++counttmp == k)
				{
					staycount++;
				}
			}
			else
			{
				counttmp = 0;
			}
		}
		if (pass == 1)
		{
			passcount++;
		}
	}

	printf("%d\n", passcount);
	printf("%d\n", staycount);

	for (i = 0; i < 10; i++)
	{
		free(People[i]);
	}
	free(People);

	return 0;
}