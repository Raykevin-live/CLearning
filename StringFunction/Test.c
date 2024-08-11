#define _CRT_SECURE_NO_WARNINGS 1
#include "String.h"

void test1()
{
	char str[] = "abcdefg";

	size_t len = MyStrlen(str);
	printf("%zd\n", len);
}

void test2()
{
	char str1[] = "xxxxxxxxx";
	char str2[] = "abc";
	char* ret = MyStrcpy(str1, str2);
	printf("%s\n", ret);
}

void test3()
{
	char str3[30] = "xxxxxxxxxxxxxxxx";
	char str4[] = "abcdefg";
	char* tmp = MyStrcat(str3, str4);
	printf("%s\n", tmp);
}

void test4()
{
	char str5[] = "abcdf";
	char str6[] = "abcde";
	int ret = MyStrcmp(str5, str6);
	if (ret > 0)
	{
		printf(">\n");
	}
	else if (ret < 0)
	{
		printf("<\n");
	}
	else
	{
		printf("=\n");
	}
}

void test5()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "def";

	char arr3[] = "abbbcedf";
	char arr4[] = "bbc";

	printf("arr2在arr1中");
	const char* ret = MyStrstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了, %s\n", ret);
	}

	printf("arr4在arr3中");
	ret = MyStrstr(arr3, arr4);
	if (ret == NULL)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了, %s\n", ret);
	}
}

void test6()
{
	char str1[] = "xxxxxxxxx";
	char str2[] = "abc";
	char* ret = MyStrncpy(str1, str2, 5);
	printf("%s\n", ret);
}

void test7()
{
	char str1[30] = "xxxxxxxxx";
	char str2[30] = "abcdefg";
	/*char* ret = MyStrncat(str1, str2, 5);
	printf("%s\n", ret);*/

	char* ret = MyStrncat(str2, str2, 10);
	printf("%s\n", ret);

}

int main()
{	
	/*test1();
	test2();
	test3();
	test4();
	test5();*/
	//test6();
	test7();

	return 0;
}