#include <stdio.h>
int main(){
	int row, col, i, j;
	printf("Enter Rows: ");	
	scanf("%d", &row);
	printf("Enter Column: ");
	scanf("%d", &col);
	
	while(row!=col){
	printf("Row must be EQUAL to Column\n");
	printf("Error! Re-Enter Rows: ");	
	scanf("%d", &row);
	printf("Eror! Re-Enter Column: ");
	scanf("%d", &col);
	}
	
	int student[row][col];
	for(i=0; i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter marks inserted for the student: ");
			scanf("%d", &student[i][j]);
		}
	}
	printf("\nInitial Display:\n\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d  ", student[i][j]);
		}
		printf("\n");
	}
	printf("\nTransposed Display: \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d  ", student[j][i]);
		}
		printf("\n");
	}
}
