#include <stdio.h>

int main(){
	int buildingStructure[2][3][4] = {
		{
			{1, 0, 1, 1},
			{0, 0, 0, 1},
			{1, 1, 0, 0}
		},
		{
			{0, 1, 1, 0},
			{1, 0, 0, 1},
			{0, 0, 1, 1}
		}
	};
	int totalEmptyBeds = 0;
	int floors = 2;
	int rooms = 3;
	int beds = 4;
	int i, j, k;
	
	for(i=0; i<floors; i++){
		for(j=0; j<rooms; j++){
			for(k=0; k<beds; k++){
				if(buildingStructure[i][j][k] == 0){
					totalEmptyBeds++;
				}
			}
		}
	}
	

	
	for(i=0; i<floors; i++){
		printf("Floor %d:\n", i + 1);
		for(j=0; j<rooms; j++){
			printf("\tRoom %d: ", j + 1);
			for(k=0; k<beds; k++){
				printf("%d ", buildingStructure[i][j][k]);
			}
			printf("\n");
		}
	}
	
	printf("\nTotal Empty Beds (0s) found in the building: %d\n", totalEmptyBeds);
	
	return 0;
}
