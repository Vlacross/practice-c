#include <stdio.h>
#include <math.h>

/* 
  Armstrong or narcissistic number is a 'n' didt number such that
  the sum of it's digits raised to the nth power is equal to the number itself. 
*/

int main()
{
  printf("\n\n\n\t\tThe Armstrong numbers in between 1 and 500 are :\n\n");
  int n, sum, i, t, a;

  for (i = 1; i <= 500; i++)
  {
    t = i;
    sum = 0;
    while(t != 0)
    {
      a = t%10;
      sum += a*a*a;
      t = t/10;
    }
     if (sum == i)
     printf("\n\t\t%d", i);
  }

  printf("\n\n\t\tSimple Out");
  return 0;
}


