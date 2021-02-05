#include <stdio.h>

int main()
{
  int len, i;
  printf("Print the size of array you would like:\n");
  scanf("%d", &len);

  int arr[len], reversed_arr[len];
  printf("enter a number for each slot in the array: \n");

  for(i = 0; i < len; i++) 
  {
    scanf("%d", &arr[i]);
    reversed_arr[(len-1)-i] = arr[i];
  }

  printf("The array you entered is:\n[");

  for (i = 0; i < len; i++) 
  {
    printf(" %d,", arr[i]);
  }

  printf(" ]\n\n Your array reversed is:\n[");

  for (i = 0; i < len; i++) 
  {
    printf(" %d,", reversed_arr[i]);
  }

  printf(" ]\n\n");

}