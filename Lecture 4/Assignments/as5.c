#include <stdio.h>

int main (void){

	int days, start;

	// Do-while loop to validate proper number of days
	do{
	printf("Enter number of days in month: ");
	scanf("%d", &days);
	} while (days < 28 || days > 31);

	// Do-while loop to validate proper start of the calendar
	do{
	printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start);
	} while (start < 1 || start > 7);
	
	printf("\n");

	// Printnig of space for the start of the calendar
	for (int i = 1; i < start; i++){
		printf("   ");
	}
	
	// Printing of the calendar
	for (int i = 1; i <= days; i++){
		printf("%2d ", i);
		// Checks to see if each day is the end of the week then prints to the next line if yes
		if (((start + i - 1) % 7) == 0)
			printf("\n");
	}
}