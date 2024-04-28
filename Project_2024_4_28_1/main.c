#include <stdio.h>
#include <string.h>
#include <assert.h>


char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	
	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
	while(*dest++ = *src++)
	{
		;
	}
	//����Ŀ�Ŀռ����ʼ��ַ
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
	assert(src);//����д��������
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


