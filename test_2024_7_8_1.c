#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//int main()
//{
//	//��̬�����ڴ������ͷţ������ڴ�й©
//	while(1)
//	{
//		malloc(1);
//		Sleep(1000);//��λ��ms
//	}
//	return 0;
//}


//��̬�ڴ�й¶�ı�����

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//����д��û���⣬���Դ����ַȥ��ӡ�ַ���
//	
////	//�ͷ�
////	free(str);
////	str = NULL;
//}

//����1��
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);//����ָ�봫��
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);//����д��û���⣬���Դ����ַȥ��ӡ�ַ���
//	
//	//�ͷ�
//	free(str);
//	str = NULL;
//}

//��2��
char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;//���÷���ֵ
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello world");
	printf(str);//����д��û���⣬���Դ����ַȥ��ӡ�ַ���
	
	//�ͷ�
	free(str);
	str = NULL;
}


int main()
{
	Test();
	return 0;
}

//����1�����д���������ֱ���������
//����2����������ڴ�й¶����
//str��ֵ���ݵ���ʽ��p
//p��GetMemory�������βΣ�ֻ���ں����ڲ���Ч���Ⱥ�������֮�󣬶�̬�����ڴ���δ�ͷţ������޷��ҵ������Ի�����ڴ�й¶

