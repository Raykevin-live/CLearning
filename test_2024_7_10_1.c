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
//	//1.��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);//SEEK_CUR,��ָ��ǰλ��,ƫ�������ƫ��Ϊ������ǰƫ��Ϊ��
//	
//	int pos = ftell(pf);//ftell - ��ӡ�ļ�ָ���������ʼλ�õ�ƫ����
//	printf("%d\n", pos);
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//rewind ���ļ�ָ��ص���ʼλ��
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

//perror����
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
	//���ļ�
	int ch = 0;//ע�⣺int����char��Ҫ����EOF
	
	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
	while((ch = fgetc(pf)) != EOF)// ��׼c I/O��ȡ�ļ�ѭ��
	{
		putchar(ch);//��ӡch
	}
	//�ж�ʲôԭ�������
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
