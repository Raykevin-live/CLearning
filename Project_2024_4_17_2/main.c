#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int num = 1;
//	
//	printf("��������n->:");
//	scanf("%d", &n);
//	
//	for(i = 1;i<n+1;i++)
//	{
//		num *= i;
//	}	
//	
//	printf("%d�Ľ׳���:%d\n", n, num);
//	
//	return 0;
//}



//����1��+2��+3������+n��

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int num = 1;
//	int add = 0;
//	
//	printf("��������n->:");
//	scanf("%d", &n);
//	
//	for(i = 1;i<n+1;i++)
//	{
//		num *= i;
//		add += num;
//	}	
//	
//	printf("%d�Ľ׳˺���:%d\n", n, add);
//	
//	return 0;
//}


//��һ�����������в���ĳ�����������n����дint binsearch(intx ,intv[], int n);
//���ܣ���v[0]<= v[1]<=v[2]...<=v[n-1]�������в���x


//�ź��������£�����ʹ�ö��ַ�
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz -1;
//	int mid = 1;
//	
//	while(left <= right)//�������±껥��ʱ˵���Ҳ���
//	{
//		mid = (left + right) / 2;
//		if(arr[mid] > k)
//		{
//			right = mid -1;
//		}
//		else if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else 
//		{
//			printf("�ҵ���,�±���:%d\n", mid);
//			break;
//		}
//	}
//	if(left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}



//���������м��£�ַ�

//int main()
//{
//	char arr1[] = "welcome to world!!!!!";//ʹ��sizeofʱ����\n�ַ�����Ҫ-2�������±�
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1)-1;//ʹ��strlen��������Ҫ����\n�ַ�����ֻ�����ַ�����
//	
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//ͣ��1s
//		Sleep(1000);//1000 ms = 1 s
//		system("cls");//ִ��ϵͳ�����һ������ - cls - �����Ļ
//		left++;
//		right--;
//	}
//	
//	printf("%s\n", arr2);
//	
//	return 0;
//}


//�û�����¼���Σ�����֮����ʾ�˳�����

int main()
{
	int i = 0;
	char password[20] = {0};
	
	for(i = 0; i<3;i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if(strcmp(password, "123456") == 0)//�ȺŲ��������Ƚ������ַ����Ƿ���ȣ�Ӧ������strcmp�⺯��
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if(3 == i)
		printf("��������������˳�����\n");
	return 0;
}

