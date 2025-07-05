#include <stdio.h>

int main(void) {

	int Length, Breadth;

	printf("Enter the length of the rectangle: ");
	scanf_s("%d", &Length);

	printf("Enter the breadth of the rectangle: ");
	scanf_s("%d", &Breadth);


	int result =  Length * Breadth;

	printf("The area of the rectangle is: %d\n", result);
	return 0;
}