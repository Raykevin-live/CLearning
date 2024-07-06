#include <stdio.h>
#include <string.h>
#include <assert.h>


int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	assert(len1 == len2);
	
	//1.在str1 中追加一个str1字符串
	//strcat & strncat
	strncat(str1, str1, len1);
	
	//2.判断str2是否是追加后的字符串的字串
	//strstr - 字符串查找
	char* ret = strstr(str1, str2);
	if(!ret)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefa";
	int ret = is_left_move(arr1, arr2);
	if(1 == ret)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
