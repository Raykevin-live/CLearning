#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//int main() {
//	char arr[100];
//	//scanf("%s", &a);
//	gets(arr);
//	printf("%s\n", arr);
//}



//int main(void)
//{
//    int a;
//    char c = { 0 };
//    while (c != 'N')
//    {
//        scanf("%d", &a);
//        scanf("%c", &c);
//
//        getchar();
//        
//        printf("a=%dc=%c\n", a, c);
//        /*printf("c=%d\n",c);*/
//    }
//    return 0;
//}

//#include <stdio.h>
//int main() 
//{
//    char str[30];
//    scanf("%[a-z]", str);
//    printf("%s\n", str);
//    return 0;
//}

//
//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%*d %d", &n);
//	printf("n=%d", n);
//	return 0;
//}


//#include <stdio.h>
// int main() 
// {
//	 char a[20];
//	 scanf("%[^\n]s", &a);
//	 printf("%s\n", a);
//
//}


//1000-2000�������
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//		}
//		
//
//	}
//	return 0;
//}

//���Լ��
//int main()
//{
//	int numM = 0, numN = 0;
//	int rmd = 0;
//
//	scanf("%d%d", &numM, &numN);
//	if (numM < numN)
//	{
//		int tmp = numM;
//		numM = numN;
//		numN = tmp;
//	}
//	while (numM % numN != 0)
//	{
//		rmd = numM % numN;
//		numM = numN;
//		numN = rmd;
//	}
//	printf("���Լ��Ϊ:>%d\n", numN);
//}


//int is_leap(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//
//}

int is_prime(int num)
{
	int i = 0;
	if (num % 2 == 0)
	{
		return 0;
	}
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	for (int i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}