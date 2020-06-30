#include<stdio.h>
#include<stdlib.h>
#include<curses.h>

void main()
{
  int a, b, c, s = 0;
  if(system("CLS"))system("clear");
  printf("Enter a number:\t");
  scanf("%d", &a);
  c = a;

  while(a > 0)
  {
    b = a%10;
    s = (s*10)+b;
    a = a/10;
  }

  if(s == c)
  {
    printf("the number %d is a palindrome\n", c);
  }
  else
  {
    printf("The number %d is not a palindrome\n", c);
  }
  getchar();
}