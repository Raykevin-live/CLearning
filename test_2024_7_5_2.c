#include <stdio.h>

//喝汽水问题，一块钱可以买一瓶汽水，两个空瓶可以换一瓶汽水，问20块钱可以喝多少汽水
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while(empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;		
//	}
//	printf("total = %d\n", total);
//	return 0;
//}


//交换奇偶顺序
void print(int arr[], int sz)
{
	int i = 0;
	for(i =0; i< sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
}

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz -1;
	while(left < right)
	{
		//从左边找偶数
		while((left < right) && (1 == arr[left]%2))
		{
			left++;
		}
		//从右边找奇数
		while((left < right) && (0 == arr[right] %2))
		{
			right--;
		}
		if(left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);
	return 0;
}
