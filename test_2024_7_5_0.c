#include <stdio.h>

//int main()
//{
//	int aa[2][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	
//	int* ptr1 = (int*)(&aa +1);
//	int* ptr2 = (int*)(*(aa+1));
//	
//	printf("%d, %d\n", *(ptr1 -1), *(ptr2 - 1));//10, 5
//	
//	return 0;
//}


//int main()
//{
//	char* a[] = {"work", "at", "alibaba"};//指针数组
//	char* *pa = a;
//	
//	pa++;
//	printf("%s\n", *pa);//at
//	
//	return 0;
//}


int main()
{
	char* c[] = {"ENTER", "NEW", "POINT", "FIRST"};
	char**cp[] = {c+3, c+2, c+1, c};
	char***cpp = cp;
	
	printf("%s\n", **++cpp); //POINT
	printf("%s\n", *--*++cpp + 3); //ER
	printf("%s\n", *cpp[-2] + 3); //ST
	printf("%s\n", cpp[-1][-1] +1); //EW
	//要注意在运行过程中指针的位置有没有改变
	
	return 0;
}

