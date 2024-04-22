#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int num = 1;
//	
//	printf("请输入数n->:");
//	scanf("%d", &n);
//	
//	for(i = 1;i<n+1;i++)
//	{
//		num *= i;
//	}	
//	
//	printf("%d的阶乘是:%d\n", n, num);
//	
//	return 0;
//}



//计算1！+2！+3！……+n！

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int num = 1;
//	int add = 0;
//	
//	printf("请输入数n->:");
//	scanf("%d", &n);
//	
//	for(i = 1;i<n+1;i++)
//	{
//		num *= i;
//		add += num;
//	}	
//	
//	printf("%d的阶乘和是:%d\n", n, add);
//	
//	return 0;
//}


//在一个有序数组中查找某个具体的数字n。编写int binsearch(intx ,intv[], int n);
//功能：在v[0]<= v[1]<=v[2]...<=v[n-1]的数组中查找x


//排好序的情况下，可以使用二分法
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz -1;
//	int mid = 1;
//	
//	while(left <= right)//当左右下标互换时说明找不到
//	{
//		mid = (left + right) / 2;
//		if(arr[mid] > k)
//		{
//			right = mid -1;
//		}
//		else if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else 
//		{
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//	}
//	if(left > right)
//		printf("找不到\n");
//	return 0;
//}



//从两边向中间聚拢字符

//int main()
//{
//	char arr1[] = "welcome to world!!!!!";//使用sizeof时包含\n字符，需要-2，才是下标
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1)-1;//使用strlen函数不需要考虑\n字符，它只计算字符长度
//	
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//停留1s
//		Sleep(1000);//1000 ms = 1 s
//		system("cls");//执行系统命令的一个函数 - cls - 清空屏幕
//		left++;
//		right--;
//	}
//	
//	printf("%s\n", arr2);
//	
//	return 0;
//}


//用户最多登录三次，三次之后提示退出程序

int main()
{
	int i = 0;
	char password[20] = {0};
	
	for(i = 0; i<3;i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if(strcmp(password, "123456") == 0)//等号不能用来比较两个字符串是否相等，应该引用strcmp库函数
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if(3 == i)
		printf("三次密码均错误，退出程序\n");
	return 0;
}

