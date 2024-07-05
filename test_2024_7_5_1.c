#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>


//字符串逆序
void reverse(char* str)
{
	assert(str);
	int len = strlen(str);//strlen 接收地址
	char* left = str;
	char* right = str + len -1;
	
	while(left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}


//int main()
//{
//	char arr[256] = {0};
////	scanf("%s", arr);
//	gets(arr);
//	
//	//逆序函数
//	reverse(arr);
//	
//	printf("%s\n", arr);
//	return 0;
//}



//前n项之和 Sn = 1 + 11 + 111...
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for(i =0; i<n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}


//水仙花数打印
//int main()
//{
//	int i = 0;//i最后需要打印出来不应该在循环内部改变
//	for(i = 0; i<=100000;i++)
//	{
//		//判断i是否位水仙花数（自幂数）
//		//1.计算i的位数 - n位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while(tmp/ 10)
//		{
//			n++;
//			tmp /= 10;//改i是在循环内部可能会出问题
//		}
//		//2.计算i的每一位的n次方之和 sum
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp % 10, n);//pow是幂次函数pow（a， b） -- a^b，需要引头文件math.h
//			tmp /= 10;
//		}
//		//3.比较 i == sum
//		if(i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//打印菱形
//必须是奇数行才可以打印出菱形

int main()
{
	int line = 0;
	scanf("%d", &line);//上半部分或者下半部分，防止输入偶数
	//打印上半部分
	int i = 0;
	for(i =0; i < line;i++)
	{
		//打印空格
		int j = 0;
		for(j=0; j < line -1 -i; j++)
		{
			printf(" ");
		}
		//打印*
		for(j = 0; j < 2*i +1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for(i = 0; i<line -1;i++)
	{ 
		int j = 0;
		//打印空格
		for(j= 0; j <= i;j++)
		{
			printf(" ");
		}
		//打印*号
		for(j =0; j < 2*(line - 1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


