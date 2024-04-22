#include <stdio.h>

int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = {0};
	printf("请输入密码:>");
	scanf("%s", password);//scanf 输入之后会放到缓冲区，等待数字被读取,此时空格前的部分被放到password数组里
	//scanf 函数只读取空格前面的内容
	
	while((ch = getchar()) != '\n')
	{
		;
	}//一直读取直到出现回车
	
//	getchar();//读取一下，但是每次只能读取一个字符
	printf("请确认(Y/N):>");//最后剩余一个"\n"，如果不做读取处理会直接被printf函数给读取
	
	ret = getchar();
	
	if(ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}



////只输出数字字符
////continue 的作用
//
//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)
//	{
//		
//		if(ch < '0' || ch > '9')//ASCII码值‘0’和‘9’之间的字符
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

