//program of 1st do....while loop(validation)

#include <stdio.h>

int main(){
	int mark;
	char choice;
	char grade;
	
	do{
		//1. inner do...while for validation (0-100)
		do{
			printf("Enter student's mark!(0-100): ");
			scanf("%d", &mark);
			
			if (mark < 0 || mark > 100){
				printf("Error: invalid mark! mark must be between 0 and 100. try again.\n");
			}
		}while (mark < 0 || mark > 100);
		
		//2. Determin grade
		if (mark >= 80 && mark <= 100){
			grade = 'A';
		}else if (mark >= 70){
			grade = 'B';
		}else if (mark >= 60){
			grade = 'C';
		}else if (mark >= 50){
			grade = 'D';
		}else {
			grade = 'F';
			
		}
		
		//3. Depsplay result
		 printf("\nMark: %d ->grade: %c\n", mark, grade);
		 
		 //4. ask if lectrure want to continue
		 printf("\nDO you want to enter student's mark? (y/n): ");
		 scanf(" %c", &choice); //space before %c to clear buffer
		 
	}while (choice == 'y' || choice == 'Y');
	
	printf("program ended.\n");
	return 0;
}