#include <stdio.h>
#include <string.h>
#include <errno.h>


//struct S
//{
//	int n;
//	char c;
//	int arr[];//���������Ա
//};


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");//wb - write binary �����Ʒ�ʽ��д��
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//int main()
//{
//	//���ļ�text.txt
//	//���·��
//	// .. ��ʾ��һ��·��
//	// . ��ʾ��ǰ·��
//	fopen("../text.txt", "r");
//	FILE* pf = fopen("text.txt", "r");
//	
//	//����·��
//	fopen("D:\\redpanda_code\\text.txt", "r");
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pfWrite = fopen("text.txt", "w");
//	if(pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('h', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//	
//	return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("text.txt", "r");
//	if(pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	printf("%c", fgetc(pfRead));//h
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//	
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//	
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);//���
//	fputc(ch, stdout);//����
//	return 0;
//}

//int main()
//{
//	char buf[1024];
//	
//	FILE* pf = fopen("text.txt", "r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);//gets,һ�ζ�һ��
//	printf("%s", buf);//���ļ����Դ�һ��'\n'����ʵ����pf�ļ��д���'\n'���Ὣ��Ҳ���ƹ�ȥ
//	fgets(buf, 1024, pf);//gets,һ�ζ�һ��
//	printf("%s", buf);//���ļ����Դ�һ��'\n'
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//int main()
//{
//	char buf[1024] = {0};
//	fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ������������
//	fputs(buf, stdout);//�������׼�����
//	
////	gets(buf);
////	puts(buf);//������ȼ�
//	return 0;
//}


struct S
{
	int n;
	float score;
	char arr[10];
};

//int main()
//{
//	struct S s = { 100, 3.14f, "kevin"};
//	FILE* pf = fopen("text.txt", "w");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);//������ļ���
//	
//	fclose(pf);
//	pf = NULL;
//		
//	return 0;
//}

//int main()
//{
//	struct S s = { 0};
//	
//	FILE* pf = fopen("text.txt", "r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������������
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}


//��׼����������
//int main()
//{
//	struct S s = { 0};	
//
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);// %.2f - С���������λС��
//	
//	return 0;
//}


//ת��Ϊ�ַ���
//sscanf/sprintf
int main()
{
	struct S s = {100, 3.14f, "abcdef"};
	struct S tmp = {0};
	char buf[1024] = {0};
	
	//�Ѹ�ʽ��������ת�����ַ������浽buf
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	printf("%s\n", buf);
	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
}
