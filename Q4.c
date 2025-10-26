#include <stdio.h>

int main(){
	int rows, cols, i, j;
	int zeroCount = 0;
	

	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	
	printf("Enter the number of columns: ");
	scanf("%d", &cols);
	
	
	int matrix[rows][cols];
	int totalElements = rows * cols;
	
	printf("\nEnter the elements of the matrix:\n");
	
	
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			printf("Enter element at [%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
			
		
			if(matrix[i][j] == 0){
				zeroCount+=1;
				continue;
			}
		}
	}
	
	
	printf("\nThe entered matrix is:\n");
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTotal elements: %d", totalElements);
	printf("\nZero elements count: %d", zeroCount);
	

	if(zeroCount > (totalElements / 2)){
		printf("\n\nThe matrix IS a Sparse Matrix.");
	}
	else{
		printf("\n\nThe matrix IS NOT a Sparse Matrix.");
	}
	
	return 0;
}

