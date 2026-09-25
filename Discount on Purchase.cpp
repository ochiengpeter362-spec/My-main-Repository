/*
program to compute a discount
amount>=12,000, 10% discount
amount between 6000 and 12000 =5%
below 6000, no discount
*/
#include <stdio.h>

int main(){
	float amount;
	float discount;
	float amount_to_pay;
	
	printf("Enter the amount purchased: \t");
	scanf("%f", &amount);
	
	if(amount>=12000){
		discount = 0.1 * amount;
		amount_to_pay = amount - discount;
		printf("Discount = %.2f \n", discount);
		printf("Amount to pay = %.2f\n", amount_to_pay);
		
		
	}
	else if(amount>=6000){
		discount = 0.05 * amount;
		amount_to_pay = amount - discount;
		printf("Discount = %.2f \n", discount);
		printf("Amount to pay = %.2f\n", amount_to_pay);
		
	}
	else{
		discount = 0;
		amount_to_pay = amount;
		printf("Discount = %.2f \n", discount);
		printf("Amount to pay = %.2f\n", amount_to_pay);
		
	}
	return 0;
}