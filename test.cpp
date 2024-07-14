#include <stdio.h>


int main()
{
	int a[4] = {1, 2, 3, 4};
	int* ptr1 = (int*)(&a+1);
	int* ptr2 = (int*)((int)(uintptr_t)a + 1);
	
	printf("%x,%x", ptr1[-1], *ptr2);
	
	printf("hello world");
	return 0;
}
