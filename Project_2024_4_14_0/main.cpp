#include <stdio.h>
#include <string.h>

//循环语句

//int main()  //if 语句
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗(1/0)>: ");
//	scanf("%d",&input);
//	if(input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	
//	return 0;
//}

//int main()
//  {
//  int line = 0;
//  printf("加入比特\n");
//  while(line < 20000)
//  {
//  printf("敲一行代码: %d\n", line);
//  line ++;
//  }
//  if(line >= 20000)//好offer是由条件的
//  printf("好offer\n");
//  
//  return 0;
//  }

//int main()
//{
////	int a = 1;
////	int b = 2;
////	int c = 3;
////	int d = 4; 这种定义方式太麻烦
//	
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//定义一个存放10个整数数字的数组
//	
//	//打印全部数组
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]); //下标方式访问元素
//	//arr[下标];
//	
//	return 0;
//}


//int main()
//{
//	//移（二进制）位操作符
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整型占4个字节-32比特位
//	//00000000000000000000000000000001
//	int b = a<<1;
//	printf("%d\n", b);
//	
//	return 0;
//}

//int main()
//{
//	//(2进制)位操作符
//	//&按位与(并：同真为真，其余为假)
//	//|按位或(有一个是真则为真)
//	//^按位异或（对应的二进制位相同，则为0；相异则为1）
//	int a = 3;//011
//	int b = 5;//101
//	int c = a&b;//001
//	int d = a|b;//111
//	int e = a^b;//110
//	
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}


//单目操作符
//双目操作符
//三目操作符
int main()
{
	// ! 逻辑反操作 0为假，其余为真
	int a = 10;

	printf("%d\n", a);
	printf("%d\n", !a);

	return 0;//a = 10, !a = 0
}

//int main()
//{
//	int arr[10] = {0};//10个整型元素的数组
//	int sz = 0;
//	//10*sizeof（int） = 40
//	printf("%lld\n", sizeof(arr));
//	//计算数组元素的个数
//	//个数 = 数组总大小/每个元素的大小
//	sz = sizeof(arr)/sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//	return 0;
//}
