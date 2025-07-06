/*
 FILE		 : Area_of_Circle.cpp
 PROGRAMMER  : Shefilkhan Pathan
 DATE		 : 2025-07-05
 DESCRIPTION : This program calculates the area of a circle and the volume of a cylinder
			   based on user input for radius and height.
*/
#include <stdio.h>

int main(void) {

	// initializing variables
	int radius, height;
	float pie = 3.1416;

	// taking input from the user
	printf("Enter the radius of the circle: ");
	scanf_s("%d", &radius);

	printf("Enter the height of the cylinder: "); 
	scanf_s("%d", &height);

	// calculating the area of the circle
	float area = pie * radius * radius;
	printf("The area of the circle is: %.2f\n", area);

	// calculating the volume of the cylinder
	float volume = area * height;
	printf("The volume of the cylinder is: %.2f\n", volume);


	return 0; // end of main function
}