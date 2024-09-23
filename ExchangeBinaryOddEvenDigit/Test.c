#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_NONSTDC_NO_DEPRECATE 


#include <stdio.h>

#include <stdlib.h>

#define uint32 unsigned int
#define uint8 unsigned char

//void FuncOutputBin(uint32 value)
//{
//	char string[32] = { 0 };   //形参类型uint32最大为32位，因此我这里定义了大小为32的字符串数组存放
//	itoa(value, string, 2);
//	printf("库函数得到的二进制为：%s\r\n", string);
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
//a.(该整数为int类型)所以有32个比特位,因此我们可以找一个奇数位全为1偶数位全为0的数,和一个偶数位全为1奇数位全为0的数,分别使用与运算将这个整数的奇数位和偶数位全部提取出来.

//b.然后提取出来的奇数位后移一位变成偶数位, 偶数位前移一位变成奇数位, 然后使用或或者异或运算结合起来, 就完成了奇数位和偶数位的交换.
//
//c.奇数位全为1偶数位全为0的数:0x55555555
//
//d.奇数位全为0偶数位全为1的数 : 0xaaaaaaaa


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