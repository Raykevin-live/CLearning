#include <stdio.h>

int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = {0};
	printf("����������:>");
	scanf("%s", password);//scanf ����֮���ŵ����������ȴ����ֱ���ȡ,��ʱ�ո�ǰ�Ĳ��ֱ��ŵ�password������
	//scanf ����ֻ��ȡ�ո�ǰ�������
	
	while((ch = getchar()) != '\n')
	{
		;
	}//һֱ��ȡֱ�����ֻس�"\n"
	
	//	getchar();//��ȡһ�£�����ÿ��ֻ�ܶ�ȡһ���ַ�
	printf("��ȷ�ϣ�Y/N��:>");//���ʣ��һ��"\n"�����������ȡ�����ֱ�ӱ�printf��������ȡ
	
	ret = getchar();
	
	if(ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
	return 0;
}
