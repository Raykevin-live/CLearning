#include <stdio.h>

//int main()
//{
//	int arr[3][4] = {{1, 2, 3}, {4, 5}};
////	char ch[5][6];
//	int i = 0;
//	for(i = 0;i<3;i++)
//	{
//		int j = 0;
//		for(j = 0;j<4;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//冒泡排序函数

void bubble_sort(int arr[], int sz)
{
	//确定冒泡排序的趟数
	int i = 0;
	for(i = 0;i<sz-1;i++)//排九次
	{
		int flag = 1;//假设这一趟要排序的数据已经有序了
		int j = 0;
		for(j = 0;j<sz-1-i;j++)
		{ 
			if(arr[j]>arr[j+1])
			{
			int tmp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = tmp;
				flag = 0;//本次排序的数据不完全有序
			}
			
		}
		if(1==flag)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};//排成升序
	int i = 0;
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	//对数组arr进行传参，实际上传递过去的是数组arr首元素的地址
	bubble_sort(arr, sz);//冒泡排序
	for(i =0;i<sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}




