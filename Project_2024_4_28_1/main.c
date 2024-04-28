#include <stdio.h>
#include <string.h>
#include <assert.h>


char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	
	//拷贝src指向的字符串到dest指向的空间，包含'\0'
	while(*dest++ = *src++)
	{
		;
	}
	//返回目的空间的起始地址
	return ret;
}

//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "kevin";
//	
////	strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


char* my_strcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src);//两种写法都可以
	char* tmp = dest;
	while(*dest != '\0')
	{
		dest++;
	}
	while(*dest++ = *src++)
	{
		;
	}
	return tmp;
}

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


