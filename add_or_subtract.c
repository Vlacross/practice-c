#include <stdio.h>

void main() 
{
  int a, b, c, choice;
  while(choice != 3) 
  {

    // printf("\n%d is an %s\n", 42, type_name(42));
    printf("\nPress 1 for addition");
    printf("\nPress 2 for subtraction");
    printf("\nEnter your selection\n");

    
    // I am trying to type check the initial input without wrapping another conditional
    // while(scanf("%d", &choice) != 1)
    //   {
    //     printf("\nInput was not valid.\n");
    //     printf("\nEnter a number.\n");
    //     break;
    //   }

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
          printf("\nEnter 2 numbers\n");
          scanf("%d%d", &a, &b);
          c = a + b;
          printf("%d", c);
          break;
        case 2:
          printf("\nEnter 2 numbers\n");
          scanf("%d%d", &a, &b);
          c = a - b;
          printf("%d", c);
          break;
        default:
          printf("\nYou have passed a wrong key.");
          printf("\nPress any key to continue.");
          break;
    }
  }
}


