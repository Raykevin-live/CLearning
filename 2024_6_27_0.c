#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>

//errno ��һ��ȫ�ֵĴ�����ı���
//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��

//strtok - �ַ����и��

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
