#include <stdio.h>

/*int main()
  {
  short s = 0;
  int a = 10;
  printf("%d\n", sizeof(s = a+5));//只计算 short s的大小
  printf("%d\n", s);//s没有参与运算
  return 0;
  }*/

//int main()
//{
//	int a = 11;
//	//把第3位改成1
//	a = a|(1<<2);
//	printf("%d\n", a);//15
//	//还原回去
//	a = a & (~(1<<2));//11
//	printf("%d\n", a);
//	return 0;
//}

/*int main()
  {
  int i = 0, a = 0, b = 2, c = 3, d = 4;
  //	i = a++ && ++b && d++;//逻辑与，当左边为假时，右边将不再参与计算
  i = a++ || ++b || d++;//逻辑或，当左边有一个为真时，右边也不再计算 
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
  //调用函数的时候的（）就是函数调用操作符
  int max = get_max(a, b);//操作数有三个  a , b, get_max
  printf("max = %d\n", max);
  return 0;
  }*/

//学生
//创建一个结构体类型
struct Stu
{
	char name[20];
	int age;
	char id[20];
};
//int main()
//{
//	int a = 10;
//	//使用struct Stu 这个类型创建了一个学生对象s1， 并初始化
//	struct Stu s1 = {"张三", 20, "20240422"};
//	struct Stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	
//	printf("%s\n", ps -> name);//-> -- 指针操作符，左侧是结构体指针，右侧是成员名称
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

//整型提升
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
//	//a和b按照符号位提升
//	char c = a + b;
//	//加和后：00000000000000000000000010000010
//	//然后截取:10000010(char)
//	printf("%d\n", c);
//	//整型提升
//	//111111111111111111111110000010 - 补码(补符号位)，还是在内存中操作补码
//	//111111111111111111111110000001 - 反码
//	//100000000000000000000001111110 - 原码
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
