#include <stdio.h>

int main()
{
  printf("\n\nEnter a number:\n");

  int x, i, j, index = 0;

  scanf("%d", &x);
  printf("\n\tYou entered:%d\n", x);
  int factors[x];

  for(i = 1; i < x; i++)
  {
    if(x != 0 && x % i == 0)
    {
      factors[index] = i;
      index++;
    }
  }

  j = index -1;
  printf("\n\n\tfactors for %d are:\n", x);

  while(j >= 0)
  {
    printf("%d, ", factors[j]);
    j--;
  }
  printf("\n");
}