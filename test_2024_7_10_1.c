#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, -2, SEEK_END);//SEEK_CUR,是指当前位置,偏移量向后偏移为正，向前偏移为负
//	
//	int pos = ftell(pf);//ftell - 打印文件指针相对于起始位置的偏移量
//	printf("%d\n", pos);
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//rewind 让文件指针回到初始位置
//	
//	fclose(pf);
//	pf = NULL;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		return 0;		
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);//-1
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//perror函数
//int main()
//{
//	FILE* pf = fopen("text2.txt", "r");
//	if(pf == NULL)
//	{
//		perror("hehe");
//		return 0;
//	}
//}

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if(pf == NULL)
	{
		perror("open file test.txt");
		return 0;
	}
	//读文件
	int ch = 0;//注意：int，非char，要求处理EOF
	
	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
	while((ch = fgetc(pf)) != EOF)// 标准c I/O读取文件循环
	{
		putchar(ch);//打印ch
	}
	//判断什么原因结束的
	if(ferror(pf))
	{
		printf("error\n");
	}
	else if(feof(pf))
	{
		printf("end of file\n");
	}
	
	fclose(pf);
	pf = NULL;
}
