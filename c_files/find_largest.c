#include <stdio.h>

int main()
{
  printf("Enter the quantity of numbers you would like to enter: \n");
  int arr_len, i, largest = 0;
  scanf("%d", &arr_len);

  int arr[arr_len];

  printf("input %d numbers:\n", arr_len);
  for(i=0; i < arr_len -1; i++) {
    scanf("%d\n", &arr[i]);
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }

  printf("\nThe largest number ouf of the set: \n[ ");

  for(i=0; i < arr_len -1; i++) {
    printf("%d, ", arr[i]);
  }

  printf("] is %d\n\n", largest);

  return 0;
}