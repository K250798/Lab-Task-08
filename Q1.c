#include <stdio.h>
int main(){
	int Q1[2][2]={{24,45},{32,2}};
	int Q2[2][2]={{34,33},{14,45}};
	int result[2][2]={0};
	int i, j;
	
	for(i=0; i<2; i++){
		for(j=0;j<2;j++){
			printf("%d ", Q1[i][j]);
		}
		printf("\n");
	}
	printf("  +\n");
	for(i=0; i<2; i++){
		for(j=0;j<2;j++){
			printf("%d ", Q2[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<2; i++){
		for(j=0;j<2;j++){
			result[i][j]=Q1[i][j]+Q2[i][j];
		}
	}
	
	printf("\n  =\n");
	for(i=0; i<2; i++){
		for(j=0;j<2;j++){
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
}

