#include <stdio.h>


//����һ���ṹ��

struct Stu
{
	char name[20];
	char tele[12];
	char sex[10];
	int age;
}s4, s5, s6;//���ﴴ����Ҳ��ȫ�ֽṹ�����

struct 
{
	int a;
	char b;
	float c;	
}x;//�����ṹ��


struct 
{
	int a;
	char b;
	float c;
}* px;//�ṹ��ָ�����

//int main()
//{
//	px = &x;//����д���ǷǷ���
//	return 0;
//}


struct Stu s3;//ȫ�ֽṹ�����

//int main()
//{
//	//�����ṹ�����
//	
//	struct Stu s1;
//	struct Stu s2;
//	
//	return 0;
//}

//�ṹ���������
//struct Node
//{
//	int date;
//	struct Node* next;
//};//�������������еĽ��

//�ṹ����������������һ��Ҫ�ӽṹ���ǩ��ֹ����
typedef struct Node 
{
	int date;
	struct Node* next;
}Node;

////ע����������д���Ǵ����
//typedef struct 
//{
//	int date;
//	Node* next;
//}Node;//��������ָ��û�нṹ���ǩ����Node������֮ǰ����ʹ����Node���´���

int main()
{
	struct Node n1;
	Node n2;//�����ֶ�����
	
	return 0;
}
