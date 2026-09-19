#include <stdio.h>
#define PI 3.14159

int main(){
	float radius, height;
	float volume, surfaceArea;
	
	printf("Enter radius of cylinder: ");
	scanf("%f", &radius);
	
	printf("Enter height of cylinder: ");
	scanf("%f", &height);
	
	volume = PI * radius * radius * height;
	surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;
	
	printf("\n--- Result ---\n");
	printf("volume = %.2f\n", volume);
	printf("surface Area = %.2f\n", surfaceArea);
	
	return 0;
}