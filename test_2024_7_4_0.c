#include <stdio.h>
#include <string.h>


int main()
{
	char arr[] = "abcdef";//�ַ�����
	
	printf("%d\n", sizeof(arr));  // sizeof(arr)���������Ĵ�С(����\0)����λ���ֽڣ�7������arr��ʾ�������飩
	printf("%d\n", sizeof(arr+0));  // 4/8, ��������׵�ַ�Ĵ�С
	printf("%d\n", sizeof(*arr));  // 1, *arr����Ԫ�أ�������Ԫ�صĴ�С
	printf("%d\n", sizeof(arr[1]));  // 1, arr[1]�ǵڶ���Ԫ�أ�����ڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(&arr));  // 4/8, ��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ
	printf("%d\n", sizeof(&arr+1));  // 4/8,�������������ĵ�ַ��Ҳ�ǵ�ַ
	printf("%d\n", sizeof(&arr[0]+1));   // 4/8, �ǵڶ���Ԫ�صĵ�ַ
	
	printf("%d\n", strlen(arr));  // strlen(arr)���������Ĵ�С(��\0ֹͣ��������\0)����λ���ֽڣ�6
	printf("%d\n", strlen(arr+0));  // 6, ��������׵�ַ�Ĵ�С
	printf("%d\n", strlen(*arr));  // �Ƿ����ʣ�strlen���봫���ַ
	printf("%d\n", strlen(arr[1]));  // �Ƿ�����
	printf("%d\n", strlen(&arr));  // 6�����ǻᱨ���棬���ڲ������Ͳ�ƥ�䣬&arr����ĵ�ַ--����ָ�� char(*) p[7], strlen��Ҫ�Ĳ����� const char*
	printf("%d\n", strlen(&arr+1));  // ���ֵ��������\0����������ĵ�ַ����������ֵ
	printf("%d\n", strlen(&arr[0]+1));//5, �ӵڶ����ַ��ĵ�ַ��ʼ�����
	
	
	
	
	char* p = "abcdef";//ֻ���ַ�a�ĵ�ַ�ŵ�p��
	
	printf("%d\n", sizeof(p));// 4/8 - ����ָ�����p�Ĵ�С
	printf("*d\n", sizeof(p+1));// 4/8 - p+1�õ������ַ�b�ĵ�ַ
	printf("%d\n", sizeof(*p));// 1 - *p�����ַ����ĵ�һ���ַ�
	printf("%d\n", sizeof(p[0]));// 1, int arr[10];arr[0] == *(arr+0)  p[0] == *(p+0) == 'a'
	printf("%d\n", sizeof(&p));// 4/8, ��ַ�Ĵ�С
	printf("%d\n", sizeof(&p+1));// 4/8, ����pȡ��һ����ַ
	printf("%d\n", sizeof(&p[0]+1));// 4/8, 'b'�ĵ�ַ
	
	printf("%d\n", strlen(p));// 6, ��'a'�ĵ�ַ�������'\0'
	printf("*d\n", strlen(p+1));// 5,��'b'�ĵ�ַ�������'\0'
	printf("%d\n", strlen(*p));// �Ƿ����ʣ�ֻ�ܴ����ַ
	printf("%d\n", strlen(p[0]));// �Ƿ����ʣ�ֻ�ܴ����ַ
	printf("%d\n", strlen(&p));// ���ֵ��p�ĵ�ַ���Ķ������޷�Ԥ��ģ���p���׵�ַ��ʼ��
	printf("%d\n", strlen(&p+1));// ���ֵ������һ��p�ĵ�ַ�ռ��С�Ŀռ䣬���¸�Ԫ�ص��׵�ַ��ʼ�� 
	printf("%d\n", strlen(&p[0]+1));// 5��'b'�����
	
	
	
	//��ά����
	int a[3][4] = {0};
	
	printf("%d\n", sizeof(a)); //48, ������ά����Ĵ�С
	printf("%d\n", sizeof(a[0][0])); //4, ��Ԫ�صĴ�С
	printf("%d\n", sizeof(a[0])); // 16, a[0]�൱�ڵ�һ����һά�����������
	//sizeof (arr[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
	
	printf("%d\n", sizeof(a[0]+1)); // 4/8, ��һ�еڶ���Ԫ�صĵ�ַ
	//sizeof (a[0]+1)������������������sizeof()�ڣ�a[0]��ʾ��Ԫ�صĵ�ַ��Ҳ���ǵ�һ�е�һ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*(a[0]+1))); // 4, ��һ�еڶ���Ԫ�أ���С��4���ֽ�
	printf("%d\n", sizeof(a+1)); // 4,  a��������ʱ���൱�ڰѶ�ά����ÿ�е���һ������Ԫ�أ������б�ţ�Ҳ���Ǳ�ʾ��һ�еĵ�ַ��a+1�ͱ�ʾ�ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(a+1))); // 16�� �൱�ڼ���ڶ��еĴ�С�����a[1]
	printf("%d\n", sizeof(&a[0] +1));// 4, �ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0]+1)));// 16,�ڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(*a)); // 16, ��һ�еĴ�С 
	printf("%d\n", sizeof(a[3])); // 16�� sizeof�������ȥ�������飬ֻ��������һ������
	
	
	
	return 0;
}
