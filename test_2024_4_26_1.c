#include <stdio.h>
#include <string.h>

//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000 - ԭ��
//	//11111111111111111111111101111111 - ����
//	//11111111111111111111111110000000 - ����
//	//10000000 - �ضϺ�
//	//11111111111111111111111110000000 - ��1��������λ������������(����)
//	printf("%u\n", a);//���ò��뵱���޷���λֱ�Ӵ�ӡ
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
//	printf("%llu", strlen(a));//�ҵ�'\0',֮��ͻ�ֹͣҲ����0
//	return 0;
//}

int main()
{
	int n = 9;
	float* pFloat = (float*) &n;
	printf("n��ֵΪ��%d\n", *pFloat);
	printf("pFloat��ֵΪ:%f\n", *pFloat);
	
	*pFloat = 9.0;
	printf("num��ֵΪ:%d\n", n);
	printf("*pFloat��ֵΪ:%f\n", *pFloat);
	return 0;
}
