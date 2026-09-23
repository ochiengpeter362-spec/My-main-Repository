#include <stdio.h>

int main(){
	int bookID;
	int dueDate;
	int returnDate;
	int daysOverdue;
	int fineRate;
	int fineAmount;
	
	printf("Enter Book ID: ");
	scanf("%d", &bookID);
	
	printf("Enter Due Date(day number): ");
	scanf("%d", &dueDate);
	
	printf("Enter Return Date (day number): ");
	scanf("%d", &returnDate);
	
	//ii. calculate days overdue
	daysOverdue = returnDate - dueDate;
	
	//Check if not overdue
	if(daysOverdue <= 0){
		daysOverdue = 0;
		fineRate = 0;
		fineAmount = 0;
		printf("\nNO fine. Book return on time.\n");
	}
	else{
		//iii. Determine fine rate using if...else
		if(daysOverdue <= 7){
			fineRate = 20;
		}
		else if(daysOverdue <= 14){
			fineRate = 50;
		}
		else{
			fineRate = 100;
		}
		fineAmount = daysOverdue*fineRate;
	}
	//iv. Display
	printf("\n--- Library Fine Details ---\n");
	printf("bookID = %d\n", bookID);
	printf("dueDate = %d\n", dueDate);
	printf("returnDate = %d\n", returnDate);
	printf("daysOverdue = %d\n", daysOverdue);
	printf("fineRate = Ksh. %d per day\n", fineRate);
	printf("fineAmount = Ksh. %d\n", fineAmount);
	
	return 0;	
}