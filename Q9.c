#include <stdio.h>

int main(){
	int cities = 2;
	int days = 2;
	int times = 3;
	
	int temperatureData[2][2][3];
	int highestTemperatures[2];
	int i, j, k;
	int currentMax;
	
	
	for(j=0; j<days; j++){
		for(k=0; k<times; k++){
			char *timeSlot;
			
			if(k == 0){
				timeSlot = "Morning";
			}
			else if(k == 1){
				timeSlot = "Afternoon";
			}
			else{
				timeSlot = "Night";
			}
			
			printf("\n Day %d, %s Temps ---\n", j + 1, timeSlot);
			
			for(i=0; i<cities; i++){
				printf("Enter temp for City %d: ", i + 1);
				scanf("%d", &temperatureData[i][j][k]);
			}
		}
	}
	
	printf("\n--- City Temperature Maximums:\n");
	
	for(i=0; i<cities; i++){
		currentMax = temperatureData[i][0][0];
		
		for(j=0; j<days; j++){
			for(k=0; k<times; k++){
				if(temperatureData[i][j][k] > currentMax){
					currentMax = temperatureData[i][j][k];
				}
			}
		}
		
		highestTemperatures[i] = currentMax;
		
		printf("City %d Max Temp: %d degrees\n", i + 1, highestTemperatures[i]);
	}
	
	return 0;
}



	

