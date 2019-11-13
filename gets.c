#include <stdio.h>

int main()
{
	printf("\n\n\t\tSimple World Indeed\n\n");

	char str[50];
	printf("Enter your complete name:\n\n");

	fgets(str, 50, stdin);
	printf("\n\nWelcome to Simple World %s\n\n\n", str);
	printf("\n\n\t\t\tSimple World Out\n\n");
	return 0;
}
