//program to calculate electrical bill and provide the cost

#include <stdio.h>

int main(){
	float units[100];
	float rate = 50; // FIXED RATE Ksh 50
	float total_cost = 0, total_units = 0;
	int i;
	
	//1. Accept consumption
	printf("Enter electricity Consumption for 100 households:\n");
	for(i = 0; i< 100; i++){
		printf("Household %d units: ", i + 1);
		scanf("%f", &units[i]);
		total_units += units[i];
		total_cost +=units[i] * rate;
	}
	
	//2. Display with cost
	printf("\n--- Report (Rate Ksh 50 per unit) ---\n");
	for (i = 0; i < 100; i++){
		printf("Household %d: %.2f units -> Ksh %.2f\n", i + 1, units[i], units[i] * rate);
	}
	
	printf("\nTotal units consumed: %.2f\n", total_units);
	printf("Total Cost: Ksh %.2f\n", total_cost);
	
	return 0;
}