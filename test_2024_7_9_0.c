#include <stdio.h>
#include <string.h>
#include <errno.h>


//struct S
//{
//	int n;
//	char c;
//	int arr[];//柔性数组成员
//};


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");//wb - write binary 二进制方式，写入
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//int main()
//{
//	//打开文件text.txt
//	//相对路径
//	// .. 表示上一级路径
//	// . 表示当前路径
//	fopen("../text.txt", "r");
//	FILE* pf = fopen("text.txt", "r");
//	
//	//绝对路径
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
//	//写文件
//	fputc('h', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	
//	//关闭文件
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
//	//读文件
//	printf("%c", fgetc(pfRead));//h
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//	
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);//输出
//	fputc(ch, stdout);//输入
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
//	//读文件
//	fgets(buf, 1024, pf);//gets,一次读一行
//	printf("%s", buf);//读文件的自带一个'\n'，事实上是pf文件中存在'\n'，会将它也复制过去
//	fgets(buf, 1024, pf);//gets,一次读一行
//	printf("%s", buf);//读文件的自带一个'\n'
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//int main()
//{
//	char buf[1024] = {0};
//	fgets(buf, 1024, stdin);//从标准输入流读取，即键盘输入
//	fputs(buf, stdout);//输出到标准输出流
//	
////	gets(buf);
////	puts(buf);//与上面等价
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
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);//输出到文件里
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
//	//格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}


//标准化输入数据
//int main()
//{
//	struct S s = { 0};	
//
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);// %.2f - 小数点后保留两位小数
//	
//	return 0;
//}


//转换为字符串
//sscanf/sprintf
int main()
{
	struct S s = {100, 3.14f, "abcdef"};
	struct S tmp = {0};
	char buf[1024] = {0};
	
	//把格式化的数据转化成字符串储存到buf
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	printf("%s\n", buf);
	//从buf中读取格式化的数据到tmp中
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
}
