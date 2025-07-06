/*
 FILE : CH_3.cpp
 AUTHOR : Shefilkhan Pathan
 FIRST VERSION : 2025-07-05
 DESCRIPTION : This program converts a temperature from Celsius to Fahrenheit.
*/
#include<stdio.h>

// Constants for temperature conversion
#define	FREEZING_POINT 32 
#define BOILING_POINT 100
#define SCALING_FACTOR 9.0 / 5.0

int main(void) {
	
	// Variables to hold temperatures in Celsius and Fahrenheit
	int celsius;
	int fahrenheit;

	// Prompt user for input and perform conversion
	printf("Enter temperature in Celsius: ");
	scanf_s("%d", &celsius);

	// Convert Celsius to Fahrenheit using the formula: F = C * (9/5) + 32
	fahrenheit = (celsius * SCALING_FACTOR) + FREEZING_POINT;

	// Output the result
	printf("Temperature in Fahrenheit: %d\n", fahrenheit);

	return 0; // End of main function
}