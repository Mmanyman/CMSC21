#include <stdio.h>

int main (void){

	int power, number;

	// Inputting of value o n
	printf("Please input a number: ");
	scanf("%d", &number);

	printf("n    2 to the n\n");
	printf("_    __________\n");

	// For loop to display the correct value of 2 to the nth value
	for (int i = 0; i <= number; i++){
		if (i == 0){
			power = 1;
		}
		else{
			power = power * 2;
		}
		printf("%d     %d\n", i, power);
	}
}

