#include <stdio.h>

int main()
{
  int i, n;

  printf("Enter a number to print the multiplication table for:\n");

  scanf("%d", &n);

  for(i = 0; i <= 10; i++) 
  {
    printf("%d x %d = %d\n", n, i, n*i); 
  }

  printf("\n..simple\n\n");

}