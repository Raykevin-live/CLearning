#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p = (int*)malloc(10*sizeof(int));//ǿ�����͸ı�
//	
//	if( p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for(i = 0; i<10;i++)
//		{
//			*(p+i) = i;
//		}
//		for(i = 0; i<10;i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ��ʱ
//	//��Ӧ�û���ϵͳ
//	free(p);
//	p = NULL;
//	
//	return 0;
//}


//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for(i = 0; i<10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//	free(p);
//	p = NULL;
//	
//	return 0;
//}

int main(
{
	int* p = (int*)malloc(20);
	if(p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for(i = 0; i< 5; i++)
		{
			*(p+i) = i;
			
		}
	}
	//ʹ��malloc���ٵ�20���ֽڵĿռ�
	//ϣ���ܹ���40���ֽڵĿռ�
	//��ʹ��ralloc�������ٸ���Ŀռ�
	//reallocʹ�õ�ע������
	//1.���pָ��Ŀռ�֮�����㹻�Ŀռ����׷�ӣ����󷵻�p
	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�ռ�����
	//����һ����������Ŀռ䣬���Ұ�ԭ�����ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
	//��󷵻��¿��ٵ��ڴ�ռ��ַ
	//3.����һ���µı���������realloc�����ķ���ֵ
//	int* p2 = (int*)realloc(p, 40);

	int* ptr = realloc(p, INT_MAX);
	if(ptr != NULL)
	{
		p = ptr;
		int i = 0;
		for(i = 5; i< 10; i++)
		{
			*(p+i) = i;			
		}
		for(i = 0; i< 10;i++)
		{
			printf("%d ", *(p+i));
		}
	}
	
	//�ͷ��ڴ�
	free(p);
	p = NULL;
}
