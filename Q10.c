#include <stdio.h>

int main(){
	int wards = 2;
	int patients = 3;
	int vitalSigns = 3;
	
	int vitalData[2][3][3] = {
		{
			{70, 98, 120},
			{85, 99, 135},
			{65, 97, 110}
		},
		{
			{90, 100, 140},
			{75, 98, 115},
			{80, 99, 125}
		}
	};
	
	int wardIndex, patientIndex, vitalIndex;
	int rowSum, colSum;
	
	
	for(wardIndex=0; wardIndex<wards; wardIndex++){
		printf("\nWard %d Analysis:\n", wardIndex + 1);
		
		printf("\tPatient Totals (Row Sums):\n");
		
		for(patientIndex=0; patientIndex<patients; patientIndex++){
			rowSum = 0;
			
			for(vitalIndex=0; vitalIndex<vitalSigns; vitalIndex++){
				rowSum += vitalData[wardIndex][patientIndex][vitalIndex];
			}
			
			printf("\tPatient %d Total Vitals: %d\n", patientIndex + 1, rowSum);
		}
		
		printf("\n\tVital Sign Totals (Column Sums): \n");
		
		for(vitalIndex=0; vitalIndex<vitalSigns; vitalIndex++){
			colSum = 0;
			
			for(patientIndex=0; patientIndex<patients; patientIndex++){
				colSum += vitalData[wardIndex][patientIndex][vitalIndex];
			}
			
			char *signName;
			
			if(vitalIndex == 0){
				signName = "Heart Rate";
			}
			else if(vitalIndex == 1){
				signName = "Temperature";
			}
			else{
				signName = "Blood Pressure";
			}
			
			printf("\tTotal %s Readings: %d\n", signName, colSum);
		}
	}
	
	return 0;
}
