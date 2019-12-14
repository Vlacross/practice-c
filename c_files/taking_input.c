#include <stdio.h>

int main() 
{
	printf("\n\n\t\tSimple World indeed\n\n\n");

	int num1, num2;
	float fraction;
	char character;

	printf("Enter two numbers number\n");

	scanf("%d%i", &num1, &num2);
	printf("\n\nThe numbers you have entered ared %d and %i\n\n", num1, num2);

	printf("\n\nEnter a decimal number\n");
	scanf("%f", &fraction);
	printf("\n\nThe float or fraction that you have entered is %f\n\n", fraction);

	printf("\n\nEnter a Character\n");
	scanf(" %c", &character);
	printf("\n\nThe character that you have entered is %c", character);

	printf("\n\n\t\t\tSimple Worlds Out!\n\n\n");

	return 0;
}
