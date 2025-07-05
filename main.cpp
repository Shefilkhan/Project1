/*
 FILE		: main.cpp	
 PROGRAMMER	: Shefilkhan Pathan
 DATE		: 2025-07-05
 DESCRIPTION: This program calculates the area of a rectangle given its length and breadth.
*/

#include <stdio.h>

// main function
int main(void) {

	// Declare variables for length and breadth of the rectangle
	int Length, Breadth;

	// Prompt the user for input
	printf("Enter the length of the rectangle: ");
	scanf_s("%d", &Length);

	// Prompt the user for input
	printf("Enter the breadth of the rectangle: ");
	scanf_s("%d", &Breadth);

	// Calculate the area of the rectangle
	int result =  Length * Breadth;

	// Output the result
	printf("The area of the rectangle is: %d\n", result);

	return 0; // Return success status
}