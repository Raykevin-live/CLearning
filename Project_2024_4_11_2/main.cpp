#include <stdio.h>

#define MAX 10//#define 定义的标识符常量


//int main()
//{
	//const-常属性
//	const int num = 4;
//	printf("%d\n",num);
//	
	
//	int n = 10;//n是变量，但是又有常属性，所以说称n为常变量
//	int arr[10] = {0};
//	
//	return 0;
//}

//枚举关键字 - enum    

enum Sex 
{
	MALE,
	FEMALE,
	SECRET 
};


//MALE,FEMALE,SECRET 枚举常量（枚举常量是不可以更改的）

//int main()
//{
////	enum  Sex s = FEMALE;（通过枚举常量定义的变量是可以更改的）
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}
