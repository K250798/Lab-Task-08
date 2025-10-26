#include <stdio.h>

int main(){
	int rows;
	int i, j;
	char currentAlpha;
	
	printf("Enter the number of rows (e.g., 5): ");
	scanf("%d", &rows);
	
	for(i=1; i<=rows; i++){
		
	
		for(j=1; j<=(rows - i) * 3; j++){
			printf(" ");
		}
		
		currentAlpha = 'A';
		
		
		for(j=1; j<=i; j++){
			printf("%c   ", currentAlpha);
			currentAlpha++;
		}
		
		currentAlpha -= 2;
		
		
		for(j=1; j<i; j++){
			printf("%c   ", currentAlpha);
			currentAlpha--;
		}
		
		printf("\n");
	}
	
	return 0;
}

