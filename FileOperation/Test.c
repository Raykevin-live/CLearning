#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//保存数字既可以用ASCii码值，又可以用二进制数
//int main()
//{
//	int a = 10000;
//
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//fgetc & fputc
//int main()
//{
//	FILE* pf = fopen("read.txt", "r");
//
//	if (pf == NULL)
//	{
//		perror("fopen fail");
//		return 1;
//	}
//	//读文件, fgetc 顺序读
//	/*int ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);*/
//	//读完文件
//	/*int ch;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}*/
//	//从标准输入读，CTRL+Z，输入EOF，才可以停下来
//	int cha;
//	while ((cha = fgetc(stdin)) != EOF)
//	{
//		printf("%c", cha);
//	}
//	
//	char ch = 'a';
//	fputc(ch, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//fgets & fputs
//int main()
//{
//	FILE* pf = fopen("fgets.txt", "r");
//	FILE* wpf = fopen("fputs.txt", "w");
//
//	if (pf == NULL || wpf == NULL)
//	{
//		perror("file fail");
//		return 1;
//	}
//	char buf[100] = { 0 };
//	fgets(buf, 100, pf);
//	for (int i = 0; i < strlen(buf); i++)
//	{
//		printf("%c", buf[i]);
//	}
//
//	fputs(buf, wpf);
//	return 0;
//}

//fprintf & fscanf


// fread & fwrite
 
 
//#include <stdio.h>
//#include <windows.h>
////VS2019 WIN11环境测试 
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区 
//	printf("睡眠10秒-已经写数据了，打开test.txt⽂件，发现⽂件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到⽂件（磁盘） 
//	//注：fflush 在⾼版本的VS上不能使⽤了 
//	printf("再睡眠10秒-此时，再次打开test.txt⽂件，⽂件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭⽂件的时候，也会刷新缓冲区 
//	pf = NULL;
//	return 0;
//}

//使用所学文件操作，在当前目录下放一个文件data.txt，
//写一个程序，将data.txt文件拷贝一份，生成data_copy.txt文件。

int main()
{
	FILE* source = fopen("data.txt", "r");
	FILE* destination = fopen("data_copy.txt", "w");
	if (source == NULL || destination == NULL)
	{
		perror("fopen fail");
		return 0;
	}
	char buffer[1024] = { 0 };
	while (fgets(buffer, 1024, source))
	{
		fputs(buffer, destination);
	}

	fclose(source);
	fclose(destination);
	return 0;
}