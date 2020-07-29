#include<stdio.h>

int main()
{
  printf("\n\n\n\t\tSimple Sort\n\n");
  int x;
  for(x=0; x <= 10; x++)
  {
    if(x&1)
      printf("\t\t\t%d is odd\n\n", x);
    else if (!(x&1))
      printf("\t\t\t%d is even\n\n", x);
  }

  printf("\n\n\t\tSimple Sort Out.\n");
  return 0;
}