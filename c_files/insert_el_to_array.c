#include<stdio.h>

int main()
{
  
  int arr[100], position, c, n, value;

  printf("Enter the size of array you would like:\n");
  scanf("%d", &n);

  printf("Enter the values to fill the array:\n");

  for(c = 0; c < n; c++) {
    scanf("%d", &arr[c]);
  }

  printf("Enter the position you would like to insert a value:\n");
  scanf("%d", &position);

  printf("Enter the Value you  would like to insert:\n");
  scanf("%d", &value);


  /* This was the initial method I chose to use, though the sample script I copied looks more efficient */
  // position--
  // while(position <= n) {
  //   c = arr[position];
  //   arr[position] = value;
  //   value = c;
  //   position++;
  // }

  for(c = n-1; c >= position; c--) {
    arr[c+1] = arr[c];
  }

  arr[position-1] = value;

  printf("The ending array is: \n[ ");

  for(c = 0; c <= n; c++) {
    printf("%d, ", arr[c]);
  }
  printf(" ]\n");

}