#include<stdio.h>

int main()
{
  printf("Enter the size of array you would like:\n");

  int arr_len, i, n, del_index;
  scanf("%d", &arr_len);

  int arr[arr_len];

  for(i = 0; i < arr_len; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("\nEnter the position of the element you would like to delete:\n");

  scanf("%d", &del_index);

  if(del_index < 0 || del_index >= arr_len+1)
    printf("\n\t Element Index out of bounds. Unable to Delete.");
  else
    for(n = del_index-1; n < i - 1; n++)
      {
        arr[n] = arr[n+1];
      }
  arr_len--;

  printf("\nThe modified array is :\n[ ");

  for(i = 0; i < arr_len; i++)
    {
      printf("%d, ", arr[i]);
    }
  printf("]\n\n");

  return 0;
}