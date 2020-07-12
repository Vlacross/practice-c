#include <stdio.h>

int main()
{
  int n, i;
  float sum = 0, x;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter %d elements:", n);
  for(i = 0; i < n; i++)
  {
    scanf("%f", &x);
    sum += x;
  }

  printf("\t\t\nThe average of the entered numbers is: %f\n\n", (sum/n));
  printf("\t\t\nKeep the Simple world Simple.\t\t\n");
  return 0;
}