#include<stdio.h>

void main()
{
  int x = 6, y = 4;
  x = x^y;
  y = x^y;
  x = x^y;
  printf("\nx = %d and y = %d\n", x, y);
}
