#include <stdio.h>

#define ROWS 2
#define COLS 2
#define CHANNELS 3

int main(){
	int image[ROWS][COLS][CHANNELS] = {
	    { {9, 1, 1}, {1, 9, 1} },
	    { {1, 1, 9}, {4, 4, 4} }
	};
	
	int i, j, k;
	int totalIntensity = 0;
	int totalPixels = ROWS * COLS;
	int totalChannels = totalPixels * CHANNELS;
	
	printf("--- RGB Image Pixel Data (Scale 0-9) ---\n");
	
	for(i=0; i<ROWS; i++){
		for(j=0; j<COLS; j++){
			printf("Pixel [%d][%d]: R=%d, G=%d, B=%d\n", 
			       i, j, 
			       image[i][j][0], 
			       image[i][j][1], 
			       image[i][j][2]);
			
			for(k=0; k<CHANNELS; k++){
				totalIntensity += image[i][j][k];
				continue;
			}
		}
	}
	
	float averageIntensity = (float)totalIntensity / totalChannels;
	
	printf("\nTotal intensity sum: %d", totalIntensity);
	printf("\nTotal number of channels (R+G+B): %d", totalChannels);
	
	printf("\n\nThe Average Color Intensity of the image is: %.2f", averageIntensity);
	
	return 0;
}

