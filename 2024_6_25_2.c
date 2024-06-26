#include <stdio.h>
#include <string.h>
#include <assert.h>


int main()
{
	char arr1[10] = "abcdef";
	char arr2[] = "ghi";
	
	strncat(arr1, arr2, 6);
	
	return 0;
}
