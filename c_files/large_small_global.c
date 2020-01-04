#include<stdio.h>

int a,b;
int main()
{
  printf("\n\nEnter two different values to find the smallest and the greatest number: \n");
  scanf("%d%d", &a, &b);

  if(a == b)
    printf("The values you entered are not different");

  else if(a < b)
  {
    printf("\n\nThe largest number is %03d\n", b);
    printf("\nThe smallest number is %03d\n", a);
  }
  else
  {
    printf("\nThe largest number is %03d\n", a);
    printf("\nThe smallest number is %03d\n", b);
  }
  printf("\n\nNow We Know\n");
  return 0;
}