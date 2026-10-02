//program to calculate electrical bill

#include <stdio.h>

int main(){
	float units[10]; //array to store 10 households
	int i;
	
	//1. Accept consumption fot 10 households
	printf("Enter electricity Consumption for 10 households:\n");
	for(i = 0; i< 10; i++){
		printf("Household %d units: ", i + 1);
		scanf("%f", &units[i]);
	}
	
	//2. Display the consumtion
	printf("\n--- Electricity Consumption Report ---\n");
	for (i = 0; i < 10; i++){
		printf("Household %d: %.2f units\n", i + 1, units[i]);
	}
	return 0;
}