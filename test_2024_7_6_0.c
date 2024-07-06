#include <stdio.h>
#include <string.h>
#include <assert.h>

//猜名次问题
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	
//	for(a = 1;a <= 5;a++)
//	{
//		for(b=1; b<= 5; b++)
//		{
//			for(c = 1;c<=5;c++)
//			{
//				for(d = 1;d<=5;d++)
//				{
//					for(e=1; e<= 5;e++)
//					{
//						if( ((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e == 120)
//							{
//								printf("a=%d, b=%d, c=%d, d=%d, e=%d\n", a, b, c, d, e);
//							}							
//						}
//							
//					}
//				}
//			}
//		}
//	}
//	
//	return 0;
//}



//字符左旋

//1.暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for(i =0; i<k ;i++)
//	{
//		//1.
//		char tmp = *arr;
//		//2.
//		int j = 0;
//		for(j =0 ;j< len -1; j++)
//		{
//			*(arr + j) = *(arr +j + 1);
//		}
//		//3.
//		*(arr + len - 1) = tmp;
//	}
//	
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	
//	printf("%s\n", arr);
//	return 0;
//}



//2.三部翻转法
//ab cdef
//ba fedc
//cdefab

void reverse(char* left, char* right)
{
	assert(left && right);
	while(left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;		
	}
}

void left_move(char* arr, int k)
{
	assert(arr);
	
	int len = strlen(arr);
	assert(k<=len);
	
	reverse(arr, arr+k-1);//逆序左边
	reverse(arr+k, arr+len-1);//逆序右边
	reverse(arr, arr+len-1);//逆序整体
}


int is_left_move(char* s1, char* s2)
{
	int len = strlen(s1);
	int i = 0;
	for(i = 0; i < len ; i++)
	{
		left_move(s1, 1);
		int ret = strcmp(s1, s2);
		if(0 == ret)
		{
			return 1;
		}		
	}
		return 0;
	
}

//判断是否由旋转得来
int main()
{
	char arr1[] = "abcdef";//常量字符串无法更改
	char arr2[] = "cdefab";
	
	int ret = is_left_move(arr1, arr2);
	if(1 == ret)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}

//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	
//	printf("%s\n", arr);
//	return 0;
//}
