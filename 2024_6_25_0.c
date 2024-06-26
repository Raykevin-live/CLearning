#include <stdio.h>
#include <assert.h>


//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	
//	while(*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	
	while(*src != '\0')
		{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;//拷贝'\0'
	//while(*dest++ = *src++)//使用后置++， 前使用后加1，同时 第一步是将后面的值赋给前面，一举多得
//	{
//		;
//	}
	//返回目的空间的起始地址
	return ret;
}

int main()
{
	char arr1[] = "abcdefgi";
	char arr2[] = "kevin";//'\0'需要拷贝
	
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	
	return 0;
}
