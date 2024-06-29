#include <stdio.h>


//结构体传参
struct S
{	
	int a;
	char c;
	double d;
};

//传址
void Init(struct S* ps)
{
	ps -> a = 100;
	ps -> c = 'w';
	ps -> d = 3.14;
}

//传值
void print1(struct S tmp)
{
	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
}

void print2(struct S* ps)
{
	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
}
int main()
{
	struct S s = {0};
	Init(&s);//传地址
	print1(s);//传值
	print2(&s);
	return 0;
}


