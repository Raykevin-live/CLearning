#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_NONSTDC_NO_DEPRECATE 


#include <stdio.h>

#include <stdlib.h>

#define uint32 unsigned int
#define uint8 unsigned char

//void FuncOutputBin(uint32 value)
//{
//	char string[32] = { 0 };   //�β�����uint32���Ϊ32λ����������ﶨ���˴�СΪ32���ַ���������
//	itoa(value, string, 2);
//	printf("�⺯���õ��Ķ�����Ϊ��%s\r\n", string);
//}



void PrintBinary(int x)
{

	for(int i = 32 - 1; i >= 0; i--)
	{
		printf("%d", (x >> i) & 1);
	}
	printf("\n");
}

#define JUDGE(X) (((X&0x55555555)<<1)|((X&0xaaaaaaaa)>>1))
//a.(������Ϊint����)������32������λ,������ǿ�����һ������λȫΪ1ż��λȫΪ0����,��һ��ż��λȫΪ1����λȫΪ0����,�ֱ�ʹ�������㽫�������������λ��ż��λȫ����ȡ����.

//b.Ȼ����ȡ����������λ����һλ���ż��λ, ż��λǰ��һλ�������λ, Ȼ��ʹ�û�����������������, �����������λ��ż��λ�Ľ���.
//
//c.����λȫΪ1ż��λȫΪ0����:0x55555555
//
//d.����λȫΪ0ż��λȫΪ1���� : 0xaaaaaaaa


int main()
{
	int x = 10;
	//FuncOutputBin(x);
	PrintBinary(x);

	x = JUDGE(x);
	//FuncOutputBin(x);
	PrintBinary(x);

	return 0;
}