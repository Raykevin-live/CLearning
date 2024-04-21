#include <stdio.h>


//switch语句实现多分支

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;//break语句不可缺少,从case进入，break跳出
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//	}
//	return 0;
//}

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch(day)
{
case 1:
case 2:
case 3:
case 4:
case 5:
	printf("工作日\n");
	break;
case 6:
case 7:
	printf("休息日\n");
	break;
default://默认值，不在所写语句里时，并且可以在结构体内部任意位置，没有顺序可言
	printf("输入错误\n");
	break;
}
	return 0;
}
