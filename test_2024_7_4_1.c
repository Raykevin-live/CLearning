# include <stdio.h>


//int main()
//{
//	int a[5] = {1, 2, 3, 4, 5};
//	int* ptr = (int*) (&a + 1);//以一个整型大小访问指针
//	
//	printf("%d, %d\n", *(a+1), *(ptr-1));//1 5
//	
//	return 0;
//}

struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];	
}* p;

//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}
 

int main()
{
	int a[4] = {1, 2, 3, 4};
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	
	printf("%x,%x", ptr1[-1], *ptr2);

	return 0;
}


//int main()
//{
//	int a[3][2] = {(0, 1), (2, 3), (4, 5)};
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}


