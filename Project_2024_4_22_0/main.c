#include <stdio.h>

//int main()
//{
//	int a = 16;
//	//>> 右移操作符
//	//移二进制位
//	//00000000000000000000000000010000
//	
//	int b = a >> 1;
//	printf("b = %d\n", b);
//	int c = -1;//整型在存储中是用补码，首位是0表示正数，是1表示负数，计算时用补码去计算
//	int d = c << 1;
//	printf("d = %d\n", d);
//	return 0;
//}



//计算储存在内存中的二进制数中含有1的数量

int main()
{
	int num = 0;
	int count = 0;
	//计算num的补码中的1的个数
	scanf("%d", &num); 
	//32bit
	//num&1 == 1 说明该位是1
	
	int i = 0;
	for(i = 0;i<32;i++)
	{
		if(1==((num>>i)&1))
		{
			count++;
		}
		printf("count = %d\n", count);
	}
	/*	while(num)
	  {
	  if(num%2 == 1)
	  {
	  count++;
	  }
	  num = num / 2;
	  }*/
	
	printf("count = %d\n", count);
	return 0;
}
