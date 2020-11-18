#include<stdio.h>
#include<curses.h>
#include<string.h>

int main()
{
  char num[10];
  int flag = 0;
  int length, i = 0;

  printf("\nEnter a number\n");
  scanf("%s", num);

  length = strlen(num);

  while(num[i++] != '\0')
  {
    if(num[i] == '.')
    {
      flag = 1;
      break;
    }
  }

  if(flag)
  {
    printf("\n\n%s is of type float!\n\n", num);
  }
  else
  {
    printf("\n\n%s is of type int!\n\n", num);
  }

  return 0;
}