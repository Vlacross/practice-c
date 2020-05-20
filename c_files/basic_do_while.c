#include<stdio.h>

int main()
{
  printf("\n\n\t\tSimple do_while beginning:\n\n");

  int i = 10;

  do
  {
    printf("i = %d\n", i);
    i = i-1;
  }

  while (i > 0);

  printf("\n\n\tThe value of i after the loop is %d\n\n", i);
  printf("\n\n\t\tSimple do_while out!");
  return 0;
}