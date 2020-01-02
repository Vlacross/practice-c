#include<stdio.h>

void main()
{
  int x = 11, y = 16;
  x = x + y - (y = x);
  printf("\nx = %d and y = %d\n", x, y);
}
