#include<stdio.h>

void main()
{
  int x = 10, y = 15, temp;
  temp = x;
  x = y;
  y = temp;
  printf("\nx = %d and y = %d\n", x, y);
}
