#include <stdio.h>
#include <string.h>

//strcpy����
//int main()
//{
//	char arr1[] = "kevin";
//	char arr2[20] = "#########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//memset����(�ڴ�����)
int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);//�ڶ������������ǵ�����,�ַ��ڴ���ʱ�ᴢ��Ϊascii��ֵ���Ǹ�����
	printf("%s\n", arr);
	return 0;
}



