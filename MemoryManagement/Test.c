#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//mallocģ��ʵ�ֶ�ά����
int main()
{
	int row = 3;
	int col = 5;
	//�ȷ����У���ά���������ڶ���ָ����ָ��Ľ��ʹ��
	int** arr = (int**)malloc(sizeof(int*) * row);
	if (arr == NULL)
	{
		perror("malloc rows fail");
		return 1;
	}

	for (int i = 0; i < row; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * col);
		if (arr[i] == NULL)
		{
			perror("malloc column fail");
			for (int j = 0; j < i; j++)
			{
				free(arr[i]);
			}
			return 1;
		}
	}

	//����ʹ��
	for (int i = 0; i < 5; i++)
	{
		arr[0][i] = i + 1;
	}

	printf("%d", arr[0][4]);

	//�ͷ��ڴ�
	for (int i = 0; i < row; i++)
	{
		free(arr[i]);
	}
	free(arr);

	return 0;
}