#include<stdio.h>

int main()
{
  printf("\n\n\t\tBasic for Loop\n\n\n");

  int i = 0;

  for(i=0; i < 10; i++)
  {
    printf("i is now %d\n", i);
  }

  printf("\nThe value of i after exiting the loop is now %d\n", i);

  return 0;
}