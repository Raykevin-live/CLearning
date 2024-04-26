#include <stdio.h>

int main()
{
	const int num = 10;//用指针时依然会改变该值
	
	const int* const p = &num;//两个位置都加入const之后，不可以再改变指针，也不可以再链接新变量名
	
	//const 放在指针变量的*左边时，修饰的是*p，也就是说：不能通过改变*p来改变*p（num）的值
	//const 放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变了
	//可以理解为换变量名可以通过改变地址去绕开固定的变量
	
	*p = 20;
	
	return 0;
}
