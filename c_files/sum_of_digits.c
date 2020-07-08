#include <stdio.h>

int main()
{
  printf("\n\n\t\tSimple Studies - Sum of Digits\n\n\n");

  int n, sum = 0, remainder;
  printf("Enter the number you want to add the digits of:\t");
  scanf("%d", &n);

  while( n != 0 )
  {
    remainder = n%10;
    sum +=remainder;
    n = n/10;
  }

  printf("\n\nThe Sum of the digits for the number entered is = %d\n\n", sum);
  printf("later!");
  return 0;
}