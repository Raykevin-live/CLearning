#include <stdio.h>

/*int main()
  {
  short s = 0;
  int a = 10;
  printf("%d\n", sizeof(s = a+5));//ֻ���� short s�Ĵ�С
  printf("%d\n", s);//sû�в�������
  return 0;
  }*/

//int main()
//{
//	int a = 11;
//	//�ѵ�3λ�ĳ�1
//	a = a|(1<<2);
//	printf("%d\n", a);//15
//	//��ԭ��ȥ
//	a = a & (~(1<<2));//11
//	printf("%d\n", a);
//	return 0;
//}

/*int main()
  {
  int i = 0, a = 0, b = 2, c = 3, d = 4;
  //	i = a++ && ++b && d++;//�߼��룬�����Ϊ��ʱ���ұ߽����ٲ������
  i = a++ || ++b || d++;//�߼��򣬵������һ��Ϊ��ʱ���ұ�Ҳ���ټ��� 
  printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
  return 0;//1 2 3 4 
  }*/

/*int get_max(int x, int y)
  {
  return x>y?x:y;	
  }
  
  int main()
  {
  int a = 10;
  int b = 20;
  //���ú�����ʱ��ģ������Ǻ������ò�����
  int max = get_max(a, b);//������������  a , b, get_max
  printf("max = %d\n", max);
  return 0;
  }*/

//ѧ��
//����һ���ṹ������
struct Stu
{
	char name[20];
	int age;
	char id[20];
};
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu ������ʹ�����һ��ѧ������s1�� ����ʼ��
//	struct Stu s1 = {"����", 20, "20240422"};
//	struct Stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	
//	printf("%s\n", ps -> name);//-> -- ָ�������������ǽṹ��ָ�룬�Ҳ��ǳ�Ա����
//	printf("%d\n", ps -> age);
//	printf("%s\n", ps -> id);
//	
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	
//
//	return 0;
//}

//��������
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011(int)
//	//00000011(char)
//	
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//	
//	//a��b���շ���λ����
//	char c = a + b;
//	//�Ӻͺ�00000000000000000000000010000010
//	//Ȼ���ȡ:10000010(char)
//	printf("%d\n", c);
//	//��������
//	//111111111111111111111110000010 - ����(������λ)���������ڴ��в�������
//	//111111111111111111111110000001 - ����
//	//100000000000000000000001111110 - ԭ��
//	//-126
//	return 0;
//}

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(!c));//1
	return 0;
}
