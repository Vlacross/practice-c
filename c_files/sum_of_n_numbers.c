#include <stdio.h>

int main()
{
  
  int sum=0, val, c, nums;
  printf("\n\n\tEnter the quantity of numbers to add: \n");
  scanf("%d", &nums);

  printf("Enter %d different numbers: \n", nums);

  for(c = 0; c < nums; c++)
  {
    scanf("%d", &val);
    sum += val;
  }

  printf("the sum of all the digits is %d\n\n", sum);

}