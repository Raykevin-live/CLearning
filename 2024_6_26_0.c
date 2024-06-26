#include <stdio.h>
#include <string.h>
#include <assert.h>

//KMP　算法

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	
//	return 0;
//}


char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1 = NULL;
	char* s2 = NULL;//记录p1和p2的起始位置
	char* cur = (char*)p1;
	
	if(*p2 == '\0')//等同于if(!*p2)
	{
		return (char*)p1;
	}
	
	while(*cur)
	{
		s1 = cur;
		s2 = (char*)p2;//s2每次都得重新从p2开始
		while(*s1  && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
		{
			return cur;//找到字符串
		}
		if(!*s1)
		{
			return NULL;
		}
		cur++;
	}
	return NULL;//找不到字符串
}

//strstr -- 查找字符串（返回地址）
int main()
{
	
	char* p1 = "abcdefghi";
	char* p2 = "";
	char* ret = my_strstr(p1, p2);
	if(ret == NULL)
	{
		printf("字符串不存在\n");		
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}

