#include <stdio.h>
#include <limits.h>
#include <stdlib.h>//system
#include <string.h>//strcmp



//int main()
//{
//	//交换两个整型变量
//	int a = 3;
//	int b = 5;
//	printf("交换前：a = %d b = %d\n", a ,b);
//	
//	a = a^b;
//	b = a^b;
//	a = a^b;//使用异或操作，不会溢出，没有使用第三个变量
//	//进入企业使用第三个变量，代码的可读性高，执行效率高；异或操作，可读性差，执行效率低于其他代码
//	
//	printf("交换后：a = %d b = %d\n", a, b);
//	
//	return 0;
//}


//int main()
//{
//	//给定一个非空整型数组，除了某个元素只出现一次以外，其余每个元素均出现两次，找出那个只出现了一次的元素
//	int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 7};
//	//找出单身狗
//	int i = 0;
//	int sz =  sizeof(arr) / sizeof(arr[0]);//计算数组元素
//	
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i]在arr数组中出现了几次
//		int count = 0;//计数器
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if(arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1) 
//		{
//			printf("单身狗：%d\n", arr[i]);
//			break;
//		}
//	}
//
//	
//	return 0;//此方法暴力求解
//}

//法2:异或方法
//a^a = 0    0^a = a
//异或满足交换率(重点)
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};//满足交换律可以直接进行异或操作，不需要先排序
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for(i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//		
//	}
//	printf("单身狗是：%d\n", ret);
//	return 0;
//}

int main()
{
	char input[20] = {0};//储存数据
	//关机
	//system() - 专门用来执行系统命令
	system("shutdown -s -t 60");//set time 60s 之后又关机
	again:
	printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//判断input中放的是不是“我是猪”- strcmp -- string compare
	{
		system("shutdown -a");//取消关机
	}
	else
	{
		goto again;//跳到again的地方去line 81
	}
	return 0;
}
