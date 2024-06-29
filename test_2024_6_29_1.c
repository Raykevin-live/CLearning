#include <stdio.h>

//位段 - 二进制位
struct S
{
	int a : 2;//2 bit
	int b : 5;//5 bit
	int c : 10;//10 bit
	int d : 30;//30 bit
};
//以int(4byte来开辟内存)

//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	
//	return 0;
//}


struct S1
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

//int main()
//{
//	struct S1 s = {0};
//	
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	
//	return 0;
//}


//枚举类型
enum Sex
{
	//枚举的可能取值 - 枚举常量
	MALE = 2,
	FEMALE = 4,
	SELECT= 8
};

enum Color
{
	RED, //0
	GREEN,//1
	BLUE//2
};

//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = BLUE;
//	
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SELECT);
//	
//	return 0;
//}



//联合-联合体-共用体

union Un
{
	char c;
	int i;
};

//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	
//	return 0;
//}


//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}//返回1，表示小端，返回0表示大端


int check_sys()
{
	union Un
	{
		char c;
		int a;		
	}u;
	u.a = 1;
	
	return u.c;	//返回1，表示小端，返回0表示大端
}

//大小端字节序问题
//int main()
//{
//	int a = 0x11223344;
//	//
//	//低地址 ------> 高地址
//	// .....[][][][][11][22][33][44][][][][][][][][][][][][]...大端字节序存储模式
//	// .....[][][][][44][33][22][11][][][][][][][][][][][][]...小端字节序存储模式
//	
//	int ret = check_sys();
//	int b = 1;
//	
//	if(1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//联合体大小的计算
union Un1
{
	int a;//4 8 4
	char arr[5];//5 1 8 1 
};


int main()
{
	union Un1 u;
	printf("%d\n", sizeof(u));
	
	return 0;
}
