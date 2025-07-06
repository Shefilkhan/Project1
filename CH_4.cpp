/*
 FILE  : CH_4.cpp
 AUTHOR : Shefilkhan Pathan
 FIRST VERSION : 2025-07-05
 DESCRIPTION : Program to calculate simple interest using.
*/
#include<stdio.h>

int main(void) {

	// Program to calculate simple interest
	float principal, rate, time, interest;

	// Prompt user for input
	printf("Enter principal amount: ");
	scanf_s("%f", &principal);

	printf("Enter rate of interest: ");
	scanf_s("%f", &rate);

	printf("Enter time in years: ");
	scanf_s("%f", &time);

	// Calculate simple interest
	interest = (principal * rate* time) / 100;

	// Display the result
	printf("Simple Interest = %.2f\n", interest);

	return 0; // End of the program
}