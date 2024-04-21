#include <stdio.h>
#include <string.h>


//int main()
//{
//	char arr1[] = "abc";//字符数组
//	//"abc" -- 'a''b''c''\0' -- '\0' 字符串的结束标志 
//	char arr2[] = {'a', 'b', 'c', 0};//单引号单个字符，双引号字符串
//	//没有结束标志时，会随机打印，在编码字符串时最好加上结束标志
//	
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	
//	return 0;
//}


//转义符：\n -- 换行，\t -- 水平制表符（tab），要输出带转义符号的内容时，需要在前面在加一个转义符
//例如：\\t,防止他们被解析成一个转义序列符
// \r -- 回车

int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c'};
	printf("%lld\n", strlen(arr1));
	printf("%lld\n", strlen(arr2));//没有结束标志时，会随机打印，在编码字符串时最好加上结束标志
	
	printf("%c\n", '\'');//输出单引号
	
	printf("%c\n", '\"');//输出双引号
	
	printf("%lld\n", strlen("c:\test\32\test.c"));
	// \32 -- 32是两个二进制数字
	// 32作为8进制代表的那个十进制数字，作为ASCII码值代表的字符
	
	printf("%c\n", '\32');
	
	return 0;
}
