#include <stdio.h>


//int Add(int x, int y)
//{
//	return x+y;
//}
////函数指针，指向函数的指针
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//	int (*pa)(int , int) = Add;
//	printf("%d\n", (*pa)(2, 3));//(*pa)是函数名
//	printf("%d\n", pa(2, 3));//这里有没有*都是可以的，直接使用pa相当于Add，也就是说平时使用函数是调出函数的地址
//	return 0;
//}






void (*    signal(int , void(*)(int))  )(int);




int Add(int x, int y)
{
	return x+y;
}

int Sub(int x, int y)
{
	return x-y;
}

int Mul(int x, int y)
{
	return x*y;
}

int Div(int x, int y)
{
	return x/y;
}

//int main()
//{
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	int (*parr[4])(int, int) = {Add, Sub, Mul, Div};//函数指针的数组
//	int i =0;
//	for(i =0; i<4;i++)
//	{
//		printf("%d\n", parr[i](2,3));
//	}
//	
//	return 0;
//}



char* my_strcpy(char* dest, const char* src);
//1.写一个函数指针pf，能够指向my_strcpy
//2.写一个函数指针数组，能够存放4个my_strcpy函数的地址

//int main()
//{
//	char* (*pf)(char*,const char*);
//	char*(*pfarr[4])(char*, char*);
//	return 0;
//}


//计算器,指针数组的使用
void menu()
{
	printf("****************************\n");
	printf("****1.Add  2.Sub ***********\n");
	printf("****3.Mul  4.Div ***********\n");
	printf("****    0.Exit   ***********\n");
	printf("****************************\n");
}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[])(int, int) = {0, Add, Sub, Mul, Div};//可以随时加入新的函数
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if(input>=1 && input <=4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(0 == input)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		
//	}
//	while(input);
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch(input)
//{
//case 1:
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", Add(x, y));
//	break;
//case 2:
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", Sub(x, y));
//	break;
//case 3:
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", Mul(x, y));
//	break;
//case 4:
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", Div(x, y));
//	break;
//case 0:
//	printf("退出\n");
//	break;
//default:
//	printf("选择错误\n");
//	break;
//}
//	}
//	while(input);
//	return 0;
//}


//解决代码冗余
//封装函数
//回调函数
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch(input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}
//	while(input);
//	return 0;
//}



//int main()
//{
//	int arr[10] = {0};
//	int (*p)[10] = &arr;//取出数组的地址
//	
//	int (*pfArr[4])(int , int);//pfArr是一个数组 - 函数指针的数组
//	int (*(*ppfArr)[4])(int ,int) = &pfArr;
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每一个元素都是一个函数指针int(*)(int , int)
//	return 0;
//}


//回调函数机制
//void print(char*str)
//{
//	printf("hehe:%s", str);
//}
//
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("kevin");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}




//qsort 可以排序任意类型的数据
int main()
{
	//冒泡排序函数
	//冒泡排序只能排序整型数组
	return 0;
}
