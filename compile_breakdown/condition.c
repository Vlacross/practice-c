#include <stdio.h>

int main() 
{
	printf("\n\n\t\tSimple World Again I See\n\n\n");

	int number;
	printf("Please enter a number:\n");
	scanf("%d", &number);

	if(number < 100)
		printf("Number is less that 100!\n");
	else if(number == 100)
		printf("Number is 100!\n");
	else 
		printf("Number is greater than 100!\n");

	printf("\n\n\t\tSimple World\n\t\t\tSimply Out\n\n");

	return 0;
}
