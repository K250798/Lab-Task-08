#include <stdio.h>
int main(){
	int block, row, col, i, j,k;
	printf("Enter robot joints: ");	
	scanf("%d", &block);
	printf("Enter movements: ");
	scanf("%d", &row);
	printf("Enter coordinate readings: ");
	scanf("%d", &col);
	
	while(row>2 || col>2 ||block>2){
	printf("\nFor easy and short output; pls enter all values <=2 \n\n");
	printf("Enter robot joints: ");	
	scanf("%d", &block);
	printf("Enter movements: ");
	scanf("%d", &row);
	printf("Enter coordinate readings: ");
	scanf("%d", &col);
	}
	
	int robot[block][row][col];
	for(i=0; i<block;i++){
		for(j=0;j<row;j++){
			for(k=0;k<col;k++){
				printf("Enter Value for [%d][%d][%d]: \n",i,j,k);
			    scanf("%d", &robot[i][j][k]);
			}	
		}
	}
	printf("\n\nInitial Values: ");
	for(i=0; i<block;i++){
		for(j=0;j<row;j++){
			for(k=0;k<col;k++){
				printf("%d ", robot[i][j][k]);
			}
			
		}
		
	}
	printf("\n\nAbsolute Values: ");
	for(i=0; i<block;i++){
		for(j=0;j<row;j++){
			for(k=0;k<col;k++){
				if(robot[i][j][k]<0){
					robot[i][j][k]*=-1;
				}
				printf("%d ", robot[i][j][k]);
			}	
		}
	}
	
	
}
