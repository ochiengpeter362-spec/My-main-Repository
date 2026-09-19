//variables and data types

#include <stdio.h>

int main(){
	
	//declare variables
	float height;
	double bankBalance;
	char phoneNumber[20];
	
	printf("Enter your height (in meter): ");
	scanf("%f", &height);
	
	printf("Enter your bank balance(in kenya shillings): ");
	scanf("%lf", &bankBalance);
	
	printf("Enter your phone number: ");
	scanf("%s", phoneNumber);
	
	printf("\n--- Your entered Details ---\n");
	printf("Height: %.2f meters\n", height);
	printf("Bank Balance: Ksh %.2lf\n", bankBalance);
	printf("phone number: %s\n", phoneNumber);
	
	return 0;
}