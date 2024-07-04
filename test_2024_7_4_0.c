#include <stdio.h>
#include <string.h>


int main()
{
	char arr[] = "abcdef";//字符数组
	
	printf("%d\n", sizeof(arr));  // sizeof(arr)计算的数组的大小(包括\0)，单位是字节：7（这里arr表示整个数组）
	printf("%d\n", sizeof(arr+0));  // 4/8, 计算的是首地址的大小
	printf("%d\n", sizeof(*arr));  // 1, *arr是首元素，计算首元素的大小
	printf("%d\n", sizeof(arr[1]));  // 1, arr[1]是第二个元素，计算第二个元素的大小
	printf("%d\n", sizeof(&arr));  // 4/8, 虽然是数组的地址，但也是地址
	printf("%d\n", sizeof(&arr+1));  // 4/8,跳过整个数组后的地址但也是地址
	printf("%d\n", sizeof(&arr[0]+1));   // 4/8, 是第二个元素的地址
	
	printf("%d\n", strlen(arr));  // strlen(arr)计算的数组的大小(到\0停止，不包括\0)，单位是字节：6
	printf("%d\n", strlen(arr+0));  // 6, 计算的是首地址的大小
	printf("%d\n", strlen(*arr));  // 非法访问，strlen必须传入地址
	printf("%d\n", strlen(arr[1]));  // 非法访问
	printf("%d\n", strlen(&arr));  // 6，但是会报警告，由于参数类型不匹配，&arr数组的地址--数组指针 char(*) p[7], strlen需要的参数是 const char*
	printf("%d\n", strlen(&arr+1));  // 随机值，跳过了\0（整个数组的地址）会出现随机值
	printf("%d\n", strlen(&arr[0]+1));//5, 从第二个字符的地址开始向后数
	
	
	
	
	char* p = "abcdef";//只将字符a的地址放到p里
	
	printf("%d\n", sizeof(p));// 4/8 - 计算指针变量p的大小
	printf("*d\n", sizeof(p+1));// 4/8 - p+1得到的是字符b的地址
	printf("%d\n", sizeof(*p));// 1 - *p就是字符串的第一个字符
	printf("%d\n", sizeof(p[0]));// 1, int arr[10];arr[0] == *(arr+0)  p[0] == *(p+0) == 'a'
	printf("%d\n", sizeof(&p));// 4/8, 地址的大小
	printf("%d\n", sizeof(&p+1));// 4/8, 跳过p取下一个地址
	printf("%d\n", sizeof(&p[0]+1));// 4/8, 'b'的地址
	
	printf("%d\n", strlen(p));// 6, 从'a'的地址向后数到'\0'
	printf("*d\n", strlen(p+1));// 5,从'b'的地址向后数到'\0'
	printf("%d\n", strlen(*p));// 非法访问，只能传入地址
	printf("%d\n", strlen(p[0]));// 非法访问，只能传入地址
	printf("%d\n", strlen(&p));// 随机值，p的地址里存的东西是无法预测的，从p的首地址开始数
	printf("%d\n", strlen(&p+1));// 随机值，跳过一个p的地址空间大小的空间，从下个元素的首地址开始数 
	printf("%d\n", strlen(&p[0]+1));// 5，'b'向后数
	
	
	
	//二维数组
	int a[3][4] = {0};
	
	printf("%d\n", sizeof(a)); //48, 整个二维数组的大小
	printf("%d\n", sizeof(a[0][0])); //4, 首元素的大小
	printf("%d\n", sizeof(a[0])); // 16, a[0]相当于第一行做一维数组的数组名
	//sizeof (arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
	
	printf("%d\n", sizeof(a[0]+1)); // 4/8, 第一行第二个元素的地址
	//sizeof (a[0]+1)把数组名不单独放在sizeof()内，a[0]表示首元素的地址，也就是第一行第一个元素的地址
	printf("%d\n", sizeof(*(a[0]+1))); // 4, 第一行第二个元素，大小是4个字节
	printf("%d\n", sizeof(a+1)); // 4,  a不单独放时，相当于把二维数组每行当作一个数组元素，来进行编号，也就是表示第一行的地址，a+1就表示第二行的地址
	printf("%d\n", sizeof(*(a+1))); // 16， 相当于计算第二行的大小，类比a[1]
	printf("%d\n", sizeof(&a[0] +1));// 4, 第二行的地址
	printf("%d\n", sizeof(*(&a[0]+1)));// 16,第二行元素的大小
	printf("%d\n", sizeof(*a)); // 16, 第一行的大小 
	printf("%d\n", sizeof(a[3])); // 16， sizeof不会真的去访问数组，只把他当成一种类型
	
	
	
	return 0;
}
