#include <stdio.h>
#include <math.h>

//дһ�����������ҳ��������Ľϴ�ֵ
int get_max(int x, int y)
{
	if(x<y)
		return y;
	else 
		return x;
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("�ϴ�ֵ��:%d\n", max);
//	return 0;
//}

void swap1(int x, int y)
{
	x = x^y;
	y = x^y;
	x = x^y;//�޷����Σ�ֻ�ں����ڲ����ã�û����a��b������ϵ
}

void swap2(int* pa, int* pb)
{
	*pa = (*pa)^(*pb);
	*pb = (*pa)^(*pb);
	*pa = (*pa)^(*pb);//�����ַ��������ϵ��ָ�����ʱ��Ҫ������
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	
////	swap1(a, b);
//	swap2(&a, &b);
//	
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}


//�ҳ������ĺ���
int is_prime(int n)
{
	int j = 0;
	for(j =2;j<=sqrt(n);j++)//ע��˴��Ż�ʱҪ��Ϊ"<="
	{
		if(n%j == 0)
		{
			return 0;//	break,return 0 .����ֱ�ӽ�����������break��ǿ
		}
	}
	
	return 1;//ֻ������ѭ���ſ����ߵ���������ж�
		
}

int main()
{
	int i = 0;
	int count = 0;
	for(i=101;i<=200;i+=2)
	{
		if(	1 == is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}
