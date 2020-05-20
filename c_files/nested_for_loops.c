#include<stdio.h>

int main()
{
  printf("\n\n\t\tnested_loops beginning:\n\n");
  printf("\n\n\tNested loops are usually used to print a pattern in c. \n\n");
  printf("\n\n\tThey are also used to print out matrices using a 2 dimensional array. \n\n");

  int i, j;
  printf("\n\nOutput of the nested loop is : \n\n");

  for (i = 0; i < 5; i++)
  {
    printf("\t\t\t\t");
    for (j = 0; j < 5; j++)
    {
      printf("* ");

    }
      printf("\n");
  }
    printf("\n\n\t\tnested_loops out!\n\n");
    return 0;

}