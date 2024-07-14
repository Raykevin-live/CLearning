#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//int main()
//{
//	//动态开辟内存忘记释放，引起内存泄漏
//	while(1)
//	{
//		malloc(1);
//		Sleep(1000);//单位：ms
//	}
//	return 0;
//}


//动态内存泄露的笔试题

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//这种写法没问题，可以传入地址去打印字符串
//	
////	//释放
////	free(str);
////	str = NULL;
//}

//改正1：
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);//二级指针传参
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);//这种写法没问题，可以传入地址去打印字符串
//	
//	//释放
//	free(str);
//	str = NULL;
//}

//改2：
char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;//利用返回值
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello world");
	printf(str);//这种写法没问题，可以传入地址去打印字符串
	
	//释放
	free(str);
	str = NULL;
}


int main()
{
	Test();
	return 0;
}

//问题1：运行代码程序会出现崩溃的现象
//问题2：程序存在内存泄露问题
//str以值传递的形式给p
//p是GetMemory函数的形参，只能在函数内部有效，等函数返回之后，动态开辟内存尚未释放，并且无法找到，所以会造成内存泄露

