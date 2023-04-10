#include <stdio.h>

int main (void){

	int i = 10;

	printf("While loop output: \n");
	
	while (i < 10){
		printf("%d ", i);
		i++;
	}

	printf("\n");
	printf("For loop output: \n");

	for (i = 10; i < 10; i++){
		printf("%d ", i);
	}

	printf("\n");
	printf("Do-while loop output: \n");

	i = 10;

	do{
		printf("%d ", i);
		i++;
	}while (i < 10);
}

