#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>

//errno 是一个全局的错误码的变量
//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中

//strtok - 字符串切割函数

//int main()
//{
//	char arr[] = "chai@hsshf.hkh";
//	char* p = "@.";
//	
//	char buf[1024] = {0};
//	strcpy(buf, arr);
//	char* ret = NULL;
//	
//	for(ret = strtok(arr, p); ret; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	strtok(arr, p);
//	
//	return 0;
//}


//int main()
//{
//	
//	char* str = strerror(2);
//	printf("%s\n", str);
//	
//	FILE* pf = fopen("text.txt", "r");
//	
//	if(!pf)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}


int main()
{
	int i = 0;
	while(arr[i])
		char arr[] = "I AM A Student";
	{
		if(isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);
	return 0;
}
