#include "contact.h"



void menu()
{
	printf("********************************\n");
	printf("***** 1.add        2. del    ***\n");
	printf("***** 3.search     4. modify ***\n");
	printf("***** 5.show       6. sort   ***\n");
	printf("***** 7.save       0.exit    ***\n");
	printf("********************************\n");
}
int main()
{
	int input = 0;
	//创建一个通讯录
	struct Contact con;//con就是通讯录，包含三个成员
	// 初始化通讯录
	InitContact(&con);
	//
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch(input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			//销毁通讯录，释放动态开辟的内存
			SaveContact(&con);//退出前先保存
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		case SAVE:
			SaveContact(&con);
			break;
		default :
			printf("输入错误，请重新选择\n");
			break;
		}
			
	}while(input);
	
	return 0;
}
