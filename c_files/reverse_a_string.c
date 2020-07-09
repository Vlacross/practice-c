#include <stdio.h>
#include <string.h>
#include <curses.h>

void main()
{
  int i, j, k;
  char str[100];
  char rev[100];
  printf("Enter a string:\t");
  scanf("%s", str);
  printf("The original string in %s\n", str);

  for(i=0; str[i] != '\0'; i++)
  {
    k = i;
  }
  for(j = 0; j <= i-1; j++)
  {
    rev[j] = str[k];
    k--;
  }
  printf("The reverse string is %s\n", rev);
  getchar();
}
