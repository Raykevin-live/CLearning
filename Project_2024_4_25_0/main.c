#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	for(i = 0;i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	//ջ���ӵ͵�ַ���ߵ�ַ�仯����Խ���ʱ���п�������i
//
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)//�Ż�5������const  //�Ż�6���ı�voidΪchar*�����ص�ַ
{
//	while(*src != '\0')
	////		*dest = *src;
//	{
////		src++;
////		dest++;
//		*dest++ = *src++;//�Ż�1��ֱ��ʹ��˫Ŀ������
//	}
//	*dest = *src;//����'\0'
	char* ret = dest;
	assert(dest != NULL);//�������,�Ż�4
	assert(src != NULL);
	
	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'
	
//	if(dest != NULL && src != NULL)//�Ż�3���ж��ǲ���Ұָ��
//	{
		while(*dest++ = *src++)//�Ż�2����while�����ֱ�ӽ����ж�
		{
			;
		}
//	}
		
//	}
	return ret;
}

int main()
{
	//strcpy
	//�ַ�������
	char arr1[] = "#############";
	char arr2[] = "kevin";
//	strcpy(arr1, arr2);
	//	my_strcpy(arr1, arr2); //����char* ֮�����ֱ����printf�з���
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}


