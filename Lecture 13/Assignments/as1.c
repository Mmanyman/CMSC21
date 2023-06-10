#include <stdio.h>
#include <math.h>

// Initializes a line structure that has a slope, a distance, x and y intercepts, 2 endpoints, and a midpoint with the points being a nested structure 
struct line{
	struct points{
		float x;
		float y;
	}end1, end2, mid;
	float slope;
	float distance;
	float yIntercept;
	float xIntercept;
}line1;

// Initializes the functions needed to solve for the needed values of the line
float solveSlope(struct line line1);
float solveXmidpoint(struct line line1);
float solveYmidpoint(struct line line1);
float solveDistance(struct line line1);
float solveXintercept(struct line line1);
float solveYintercept(struct line line1);
void getSlopeInterceptForm(struct line line1);

int main(){

	// Takes the x and y coordinates of the two endpoint
	printf("Enter x and y coordinates for the 1st point: ");
	scanf("%f %f", &line1.end1.x, &line1.end1.y);
	printf("Enter x and y coordinates for the 2nd point: ");
	scanf("%f %f", &line1.end2.x, &line1.end2.y);

	// Calls the needed functions to solve for the values and prints the results out
	line1.slope = solveSlope(line1);
	printf("Slope: %.2f\n", line1.slope);

	line1.mid.x = solveXmidpoint(line1);
	line1.mid.y = solveYmidpoint(line1);
	printf("Midpoint: (%.2f, %.2f)\n", line1.mid.x, line1.mid.y);

	line1.distance = solveDistance(line1);
	printf("Distance between two endpoints: %.2f\n", line1.distance);

	line1.yIntercept = solveYintercept(line1);
	printf("y-Intercept: %.2f\n", line1.yIntercept);
	line1.xIntercept = solveXintercept(line1);
	printf("x-Intercept: %.2f\n", line1.xIntercept);

	getSlopeInterceptForm(line1);
}

float solveSlope(struct line line1){
	
	float numerator, denominator, slope;
	
	// Solves for the numerator and denominator in the slope formula ((y1-y2)/(x1-x2)) 
	numerator = line1.end1.y - line1.end2.y;
	denominator = line1.end1.x - line1.end2.x;

	// Solves for the slope and returns it
	slope = numerator / denominator;
	return slope;
}

float solveXmidpoint(struct line line1){

	// Solves and returns the x-coordintate of the midpoint of the line given the formula ((x1+x2)/2)
	float mid = (line1.end1.x + line1.end2.x) / 2;
	return mid;
}

float solveYmidpoint(struct line line1){

	// Solves and returns the y-coordintate of the midpoint of the line given the formula ((y1+y2)/2)
	float mid = (line1.end1.y + line1.end2.y) / 2;
	return mid;
}

float solveDistance(struct line line1){
	
	float distance, sum, x, y;

	/*
	Given the formula that distance = sqrt((x1-x2)^2 + (y1-y2)^2), 
	solves for the squared difference of the two x and y points,
	adds the squared differences then the value is square rooted which is then returned.
	*/
	x = (line1.end1.x - line1.end2.x) * (line1.end1.x - line1.end2.x);
	y = (line1.end1.y - line1.end2.y) * (line1.end1.y - line1.end2.y);
	sum = x + y;
	distance = sqrtl(sum);
	return distance;
}

float solveYintercept(struct line line1){

	// Solves for the y-intercept given the line equation form y-y1=m(x-x1) by using one of the endpoints and slope
	float y = (-(line1.end1.x) * line1.slope) + line1.end1.y;
	return y;
}

float solveXintercept(struct line line1){

	// Solves for the x-intercept given the slope intercept form (y=mx+b) of the line, let y=0 then solve for x
	float x = line1.yIntercept / -(line1.slope);
	return x;
}

void getSlopeInterceptForm(struct line line1){

	// Prints out the slope-intercept form of the line
	printf ("Slope-intercept form (y=mx+b): y = %.2fx + %.2f", line1.slope, line1.yIntercept);
}
