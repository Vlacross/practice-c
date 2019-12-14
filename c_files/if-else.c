#include <stdio.h>

int main()
{
  printf("\n\n\t Basic If Else Statement \n\n\n");

  int number;
  printf("Please enter a number:\n");
  scanf("%d", &number);

  if(number < 100)
    printf("The number you entered is less than 100.");
  else if(number == 100)
    printf("The number you entered is exactly 100!");
  else  
    printf("The Number you entered is over 100.");

    printf("\n\n\tIf-Else Out\n\n");

    return 0;
}

