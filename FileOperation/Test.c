#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

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

int main()
{
	FILE* pf = fopen("read.txt", "r");

	if (pf == NULL)
	{
		perror("fopen fail");
		return 1;
	}
	//读文件, fgetc 顺序读
	/*int ch = fgetc(pf);
	printf("%c", ch);

	ch = fgetc(pf);
	printf("%c", ch);

	ch = fgetc(pf);
	printf("%c", ch);

	ch = fgetc(pf);
	printf("%c", ch);*/
	//读完文件
	/*int ch;
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c", ch);
	}*/
	//从标准输入读，CTRL+Z，输入EOF，才可以停下来
	int cha;
	while ((cha = fgetc(stdin)) != EOF)
	{
		printf("%c", cha);
	}

	fclose(pf);
	pf = NULL;

	return 0;
}