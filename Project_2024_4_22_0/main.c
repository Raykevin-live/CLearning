#include <stdio.h>

//int main()
//{
//	int a = 16;
//	//>> ���Ʋ�����
//	//�ƶ�����λ
//	//00000000000000000000000000010000
//	
//	int b = a >> 1;
//	printf("b = %d\n", b);
//	int c = -1;//�����ڴ洢�����ò��룬��λ��0��ʾ��������1��ʾ����������ʱ�ò���ȥ����
//	int d = c << 1;
//	printf("d = %d\n", d);
//	return 0;
//}



//���㴢�����ڴ��еĶ��������к���1������

int main()
{
	int num = 0;
	int count = 0;
	//����num�Ĳ����е�1�ĸ���
	scanf("%d", &num); 
	//32bit
	//num&1 == 1 ˵����λ��1
	
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
