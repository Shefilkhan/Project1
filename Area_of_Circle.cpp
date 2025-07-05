/*
 FILE		 : Area_of_Circle.cpp
 PROGRAMMER  : Shefilkhan Pathan
 DATE		 : 2025-07-05
 DESCRIPTION : This program calculates the area of a circle given its radius.
*/
#include <stdio.h>

int main(void) {

	// initializing variables
	int radius;
	float pie = 3.1416;

	// taking input from the user
	printf("Enter the radius of the circle: ");
	scanf_s("%d", &radius);

	// calculating the area of the circle
	float area = pie * radius * radius;
	printf("The area of the circle is: %.2f\n", area);


	return 0; // end of main function
}