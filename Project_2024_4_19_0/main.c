#include <stdio.h>
#include <string.h>

//strcpy函数
//int main()
//{
//	char arr1[] = "kevin";
//	char arr2[20] = "#########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//memset函数(内存设置)
int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);//第二个参数必须是单引号,字符在储存时会储存为ascii码值，是个整数
	printf("%s\n", arr);
	return 0;
}



