#include <stdio.h>

#define COLUMN 9
#define ROW 9

int main(void){

	// Declaration of variable for user input and the road network array/graph
	int station;

	int road_networks[ROW][COLUMN] = {
  		{1, 1, 0, 0, 0, 1, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0, 1},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 1, 1}
	};

	// Printing of the adjacency matrix
	printf("    THE ADJACENCY MATRIX    \n");
	printf("   a  b  c  d  e  f  g  h  i \n");

	for (int i = 0; i < ROW; i++){
		printf("%c ", 'a' + i);
		for (int j = 0; j < COLUMN; j++){
			if (i == 2 || i == 3 || j == 2 || j == 3){
				printf("[%d]", road_networks[i][j]);
			}
			else{
				printf("%2d ", road_networks[i][j]);
			}
		}
		printf("\n");
	}

	//Taking the user input
	printf("\nWhat station are you currently in? Please enter a valid station.\n");
	printf("A = 0, B = 1, C = 2, D = 3, E = 4, F = 5, G = 6, H = 7, I = 8):\n");
	scanf("%d", &station);

	// Switch case to print the nearest charging station
	switch(station){
		case 0:
			printf("\nAt point: A \nPoint: C arrived at charging station.");
			break;
		case 1:
			printf("\nAt point: B \nPoint: C arrived at charging station.");
			break;
		case 2:
			printf("\nAt point: C \nPoint: C is a charging station.");
			break;
		case 3:
			printf("\nAt point: D \nPoint: D is a charging station.");
			break;
		case 4:
			printf("\nAt point: E \nPoint: D arrived at charging station.");
			break;
		case 5:
			printf("\nAt point: F \nPoint: C arrived at charging station.");
			break;
		case 6:
			printf("\nAt point: G \nPoint: D arrived at charging station.");
			break;
		case 7:
			printf("\nAt point: H \nNo charging station nearby.");
			break;
		case 8:
			printf("\nAt point: I \nNo charging station nearby.");
			break;
		default:
			printf("\nPlease enter a valid station.\n");
			main();
	}
}
