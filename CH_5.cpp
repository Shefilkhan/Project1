/*
 FILE: CH_5.cpp
 AUTHOR : Shefilkhan Pathan
 DATE : 2025-007-06
 DESCRIPTION : This program checks if a number is divisible by 97 or not.
*/
#include <stdio.h>

int main(void) {

	// declaration of variable
	int number;

	// input from user
	printf("Enter a number: ");
	scanf_s("%d", &number);

	// check if the number is divisible by 97
	if (number % 97 == 0) {
		printf("%d is not divisible by 97.\n", number);
	}
	else {
		printf("%d is divisible by 97.\n", number);
	}

	return 0; // end of main function
}