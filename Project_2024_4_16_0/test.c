	#include <stdio.h>

//int main()
//{
////	register int a = 10;//建议把a定义为寄存器
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int = int
//	//
//	unsigned int num = 1;
//	
//	return 0;
//}


//int main()
//{
//	//typedef - 类型定义 - 类型重定义
//	typedef unsigned int u_int;//定义unsigned int 类型为u_int（别名）
//	unsigned int num = 20;
//	u_int num2 = 20;
//	
//	
//	return 0;
//}


//关键字static：
//1.修饰局部变量:局部变量的生命周期变长了

//void test()
//{
//	static int a = 1;//加入static，是一个静态的局部变量
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while(i<5)//循环5次
//	{
//		test();
//		i++;
//		
//	}
//	return 0;//未加入static时：22222，加入static时：23456
//}

//2.修饰全局变量,改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用


//int main()
//{
//	//extern - 声明外部符号
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//3.修饰函数,改变了函数的链接属性。外部链接属性变成内部链接属性

extern int Add(int, int);
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}
