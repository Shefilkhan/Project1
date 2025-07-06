/*
 FILE		 : CH_6.cpp
 AUTHOR		 : Shefilkhan Pathan
 DATE		 : 2025-07-06
 DESCRIPTION : This program simplify (3*x/y) - z + k step by step.
*/
#include <stdio.h>

int main(void) {

	// Declaration of variables 
	int x = 2, y = 3, z = 3, k = 1;
	float evaluation;
	
	evaluation = (3.0 * x / y) - z + k;

	printf("The solution of values is: %.2f\n", evaluation);

	return 0;
}