#include <stdio.h>
#include <string.h>


//int main()
//{
//	int a = 10;
//	//&a 取地址
//	int* p = &a;//int* 指针的类型
//	//专门用来存放地址的 - 指针变量
//	*p = 20;//* - 解引用操作符 
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("a = %d\n", a);
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;//char* 类型
	*pc = 'a';
	printf("ch = %c\n", ch);
	printf("sizeof(pc) = %lld\n", sizeof(pc));
	return 0;
}



//结构体
//
struct Book
{
	char name[20];//c语言程序设计
	short price;//55
};//注意此处的分号

//int main()
//{
//	//利用结构体类型 - 创建一个该类型的结构体变量
//	struct Book b1 = {"c语言程序设计", 55};
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d元\n", b1.price);
//	
//	return 0;
//}


//int main()
//{
//	//利用结构体类型 - 创建一个该类型的结构体变量
//	struct Book b1 = {"c语言程序设计", 55};
//	struct Book* pb = &b1;
//	//利用pb打印出书名和价格
//	printf("书名：%s\n", (*pb).name);
//	printf("价格：%d元\n", (*pb).price);
//	
//	return 0;
//}//这种写法太啰嗦，要先储存再解引用
//.  操作符应用在结构体变量中

//int main()
//{
//	struct Book b1 = {"c语言程序设计", 55};
//	struct Book* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d", pb->price);
//	
//	return 0;
//}
//->   应用在结构体指针中->成员



//修改结构体内部的数组名   strcpy函数

//int main()
//{
//	struct Book b1 = {"c语言程序设计", 55};
//	strcpy(b1.name, "C++");//strcpy -- string copy - 字符串拷贝-库文件 - string.h
//	//由于数组名本质上是一个地址，所以不可以直接更改，只能把新的字符串拷贝放到原位置
//	
//	printf("%s\n", b1.name);
//	
//	return 0;
//}
