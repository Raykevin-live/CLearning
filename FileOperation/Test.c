#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�������ּȿ�����ASCii��ֵ���ֿ����ö�������
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
	//���ļ�, fgetc ˳���
	/*int ch = fgetc(pf);
	printf("%c", ch);

	ch = fgetc(pf);
	printf("%c", ch);

	ch = fgetc(pf);
	printf("%c", ch);

	ch = fgetc(pf);
	printf("%c", ch);*/
	//�����ļ�
	/*int ch;
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c", ch);
	}*/
	//�ӱ�׼�������CTRL+Z������EOF���ſ���ͣ����
	int cha;
	while ((cha = fgetc(stdin)) != EOF)
	{
		printf("%c", cha);
	}

	fclose(pf);
	pf = NULL;

	return 0;
}