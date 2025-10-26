#include <stdio.h>

#define SIZE 3

int main(){
	int seatingChart[SIZE][SIZE];
	
	int i, j;
	int isIdentity = 1; 
	int input;
	

	printf("Enter 1 (Correct) or 0 (Incorrect/Empty) for each seat.\n");
	
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			while(1){
				printf("Enter value for Row: %d, Col: %d: ", i + 1, j + 1);
				scanf("%d", &input);
				
				if(input == 0 || input == 1){
					seatingChart[i][j] = input;
					break;
				}
				else{
					printf("Invalid input. Please enter only 0 or 1.\n");
					continue;
				}
			}
			continue;
		}
	}
	
	
	
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			if(i == j){
				if(seatingChart[i][j] != 1){
					isIdentity = 0;
					break;
				}
				continue;
			}
			
			if(seatingChart[i][j] != 0){
				isIdentity = 0;
				break;
			}
			continue;
		}
		
		if(isIdentity == 0){
			break;
		}
		
		continue;
	}
	
	printf("Seating arrangement matrix (1=Correct, 0=Incorrect/Empty):\n");
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			printf("%d ", seatingChart[i][j]);
			continue;
		}
		printf("\n");
	}
	
	printf("\nVerification Result:\n");
	if(isIdentity == 1){
		printf("The seating arrangement is correct (Identity Matrix).");
	}
	else{
		printf("The seating arrangement is NOT correct.");
	}
	
	return 0;
}

