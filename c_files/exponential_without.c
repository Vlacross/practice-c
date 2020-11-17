#include <stdio.h>

int main()
{

  int n, exp1, exp2;
  long long int value = 1;

  printf("Enter the number and it's exponential:\n\n");
  scanf("%d%d", &n, &exp1);

  exp2 = exp1;

  while(exp1-- > 0)
  {
    value *= n;
  }

  printf("\n\n%d^%d = %lld\n\n", n, exp2, value);
  return 0;
}