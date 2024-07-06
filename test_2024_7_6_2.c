#include <stdio.h>


//创建杨氏矩阵，并查找某数字是否存在
//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col -1;
//	
//	while(x<=row-1 && y >=0)
//	{
//		if(arr[x][y] > k)
//		{
//			y--;//去掉一列
//		}
//		else if(arr[x][y] < k)
//		{
//			x++;//去掉一行
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}//这种做法只能判断，没法确定下标

int FindNum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py -1;
	
	while(x<=*py-1 && y >=0)
	{
		if(arr[x][y] > k)
		{
			y--;//去掉一列
		}
		else if(arr[x][y] < k)
		{
			x++;//去掉一行
		}
		else
		{
			*px = x+1;
			*py = y+1;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9 }};
	int k = 7;
	int x = 3;
	int y = 3;
	
	//返回型参数
	int ret = FindNum(arr, k , &x, &y);
	
	if(1 == ret)
	{
		printf("找到了\n");
		printf("下标是(%d, %d)\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	
	
	return 0;
}
