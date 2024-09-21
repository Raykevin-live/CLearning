#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//malloc模拟实现二维数组
int main()
{
	int row = 3;
	int col = 5;
	//先分配行，二维数组类似于二级指针与指针的结合使用
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

	//测试使用
	for (int i = 0; i < 5; i++)
	{
		arr[0][i] = i + 1;
	}

	printf("%d", arr[0][4]);

	//释放内存
	for (int i = 0; i < row; i++)
	{
		free(arr[i]);
	}
	free(arr);

	return 0;
}