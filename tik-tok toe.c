#include <stdio.h>

int main()
{
	
	//设定参数与变量
	
	const int size=3;
	
	int board[size][size];
	
	int i,j;
	
	int numofx1,numofx2;
	
	int numofo1,numofo2;
	
	int result=-1; // -1：没人赢，1：x赢，0：o赢
	
	//输入
	
	
	
	for(i=0;i<size;i++){
		
		for(j=0;j<size;j++){
			
			scanf("%d", &board[i][j]);
			
		}
		
	}
	
	
	
	//遍历行与列
	
	for(i=0;i<size&&result==-1;i++){
		
		numofo1=numofx1=numofo2=numofx2=0;
		
		for(j=0;j<size;j++){
			
			if(board[i][j]==1){
				
				numofx1++;
				
			}else{
				
				numofo1++;
				
			}
			
			if(board[j][i]==1){
				
				numofx2++;
				
			}else{
				
				numofo2++;
				
			}
			
		}
		
		if(numofo1==size||numofo2==size){
			
			result=0;
			
		}else if(numofx1==size||numofx2==size){
			
			result=1;
			
		}
	
		
	// 检查对角线
		
		
		printf("result = %d\n",result );	
		
	return 0;	
	}
}
