#include <stdio.h>
#include <string.h>

//汉诺塔问题


void move(char pose1, char pose2)//每次移动一个
{
	printf("%c->%c ", pose1, pose2);
}

//pose1 起始位置，pose2 中转位置，pose3 目的位置

void Hanio(int n, char pose1, char pose2, char pose3)
{
	if(1==n)
	{
		move(pose1, pose3);
	}
	else
	{
		Hanio(n-1, pose1, pose3, pose2);
		move(pose1, pose3);
		Hanio(n-1, pose2, pose1, pose3);
	}
}
int main()
{
	Hanio(1, 'A', 'B', 'C' );
	printf("\n");
	Hanio(2, 'A', 'B', 'C' );
	printf("\n");
	Hanio(3, 'A', 'B', 'C' );
	printf("\n");
	return 0;
}
