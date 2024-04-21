#include <stdio.h>

//int main()
//{
//	int i = 1;
//	
//	while(i <= 10)
//	{
//		if(5 == i)
//		{
////			break;//只要遇到break就停止后期的所有的循环，直接终止循环（while中的break是用来直接终止循环）
//			continue;//跳过本次循环（终止本次循环后面的代码，直接跳到判断部分）
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//getchar()接收字符，putchar()输出字符相当于printf
//
int main()
{
	int ch = 0;
	//EOF 在操作窗口中相当于 ctrl + z
	//EOF - end of file -> -1
	while((ch = getchar()) != EOF)
	{
		putchar(ch);
	}//此时直接输入EOF时，编译器会逐个输出字符，所以不会结束运行
	return 0;
}
