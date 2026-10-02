//while loop program to impliment ATM withdrawal process

#include <stdio.h>

int main(){
	float balance = 50000.00; //Initial balance Ksh50,000
	float withdraw;
	int condition = 1; //for while loop
	
	printf("ATM Withdrawal System \n");
	printf("Initial Balance: Ksh %.2f\n", balance);
	printf("Enter 0 to exit.\n\n");
	
	while (condition == 1){
		printf("Enter Withdrawal amount: Ksh ");
		scanf("%f", &withdraw);
		
		//condition 1: customer want to exit 
		if (withdraw == 0){
			printf("Transaction cancelled. Thank you!\n");
			break;
		}
	
		//condition 2. Insuffient balance 
		if (withdraw > balance){
			printf("Insuffient Fund! Your balance is Ksh %.2f\n", balance);
			printf("Transaction stopped.\n");
			break;
			
		}
		
		//condition 3: Invalid amount
		if(withdraw < 0){
			printf("Invalid amount! Please enter a positive amount.\n");
			continue;
		}
		
		//Successful withdrawal 
		balance = balance - withdraw;
		printf("Withdrawal successful! You have withdrawn Ksh %.2f\n", withdraw);
		printf("Remaining Balance: Ksh %.2f\n\n", balance);
		
		//If balance becomes 0, stop
		if (balance == 0){
			printf("Your account balance is now zero. No more withdrawals.\n");
			break;	
		}	
	}
	
	printf("\nFinal Balance: Ksh %.2f\n", balance);	
	return 0;
}