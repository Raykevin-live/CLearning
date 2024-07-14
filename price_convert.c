#include <stdio.h>

int main ()
{
	int amount = 100;
	int price = 0;
	
	printf("请输入金额（元）：");
	scanf ("%d", &price);

	printf("请输入票面");
	scanf("%d", &amount);
	
	int change = amount   - price;
	printf ("找您%d元。\n", change);
	
	int a;
	int b;
	
	scanf("%d %d", &a, &b );
	printf ("%d + %d = %d", a, b, a+b );
	
	return 0;
}








