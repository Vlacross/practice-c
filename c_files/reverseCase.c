#include<stdio.h>
#include<ctype.h>

int main()
{
  printf("\n\n\n\tReverse Case\n\n\n");

  char letter;
  printf("Enter a letter : ");
  putchar('\n');
    /* Used single quotes because \n is a single character; jusing double quotes creates a string literal which adds a null terminator */

  letter=getchar();

  printf("\n\nThe Reverse case of %c is : ", letter);

  if(islower(letter))
    putchar(toupper(letter));
  else
    printf("%c", tolower(letter));
    printf("\n");

    return 0;
}