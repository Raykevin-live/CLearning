#include <stdio.h>
#include <string.h>
#include <assert.h>

//KMP���㷨

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
	char* s2 = NULL;//��¼p1��p2����ʼλ��
	char* cur = (char*)p1;
	
	if(*p2 == '\0')//��ͬ��if(!*p2)
	{
		return (char*)p1;
	}
	
	while(*cur)
	{
		s1 = cur;
		s2 = (char*)p2;//s2ÿ�ζ������´�p2��ʼ
		while(*s1  && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
		{
			return cur;//�ҵ��ַ���
		}
		if(!*s1)
		{
			return NULL;
		}
		cur++;
	}
	return NULL;//�Ҳ����ַ���
}

//strstr -- �����ַ��������ص�ַ��
int main()
{
	
	char* p1 = "abcdefghi";
	char* p2 = "";
	char* ret = my_strstr(p1, p2);
	if(ret == NULL)
	{
		printf("�ַ���������\n");		
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}

