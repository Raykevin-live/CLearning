#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	for(i = 0;i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	//栈区从低地址往高地址变化，在越界的时候有可能遇到i
//
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)//优化5，加入const  //优化6，改变void为char*，返回地址
{
//	while(*src != '\0')
	////		*dest = *src;
//	{
////		src++;
////		dest++;
//		*dest++ = *src++;//优化1，直接使用双目操作符
//	}
//	*dest = *src;//赋给'\0'
	char* ret = dest;
	assert(dest != NULL);//加入断言,优化4
	assert(src != NULL);
	
	//把src指向的字符串拷贝到dest指向的空间，包含'\0'
	
//	if(dest != NULL && src != NULL)//优化3，判断是不是野指针
//	{
		while(*dest++ = *src++)//优化2，在while语句里直接进行判断
		{
			;
		}
//	}
		
//	}
	return ret;
}

int main()
{
	//strcpy
	//字符串拷贝
	char arr1[] = "#############";
	char arr2[] = "kevin";
//	strcpy(arr1, arr2);
	//	my_strcpy(arr1, arr2); //改完char* 之后可以直接在printf中返回
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}


