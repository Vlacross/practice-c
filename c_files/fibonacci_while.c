#include<stdio.h>
#include<stdlib.h>
#include<curses.h>

void fibonacci(int num);
int main()
{
  int num = 0;
  if(system("CLS"))system("clear");
  printf("Enter number of terms:\t");
  scanf("%d", &num);
  fibonacci(num);
  return 0;
}

void fibonacci(int num)
{
  int a,b, c, i = 3;
  a = 0;
  b = 1;
  if(num == 1)
  printf("%d", a);

  if(num >= 2)
  printf("%d\t%d", a, b);

  while(i <= num)
  {
    c = a+b;
    printf("\t%d", c);
    a = b;
    b = c;
    i++;
  }
}