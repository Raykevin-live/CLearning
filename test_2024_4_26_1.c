#include <stdio.h>
#include <string.h>

//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000 - 原码
//	//11111111111111111111111101111111 - 反码
//	//11111111111111111111111110000000 - 补码
//	//10000000 - 截断后
//	//11111111111111111111111110000000 - 将1当作符号位，整型提升后(补码)
//	printf("%u\n", a);//将该补码当作无符号位直接打印
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for(i = 0;i<1000;i++)
//	{
//		a[i] = -1-i;
//		
//	}
//	printf("%llu", strlen(a));//找到'\0',之后就会停止也就是0
//	return 0;
//}

int main()
{
	int n = 9;
	float* pFloat = (float*) &n;
	printf("n的值为：%d\n", *pFloat);
	printf("pFloat的值为:%f\n", *pFloat);
	
	*pFloat = 9.0;
	printf("num的值为:%d\n", n);
	printf("*pFloat的值为:%f\n", *pFloat);
	return 0;
}
