#include<stdio.h>

int main()
{
  int a[50], size, i, big, small;

  printf("\n\nEnter the size of array you would like:\n");
  scanf("%d", &size);


  printf("Enter integers to populate array:\n");
  for(i = 0; i < size; i++)
  {
   scanf("%d", &a[i]);
  }

  big = a[0];
  small = a[0];

  for(i = 1; i < size; i++) 
  {
    if(big < a[i])
    {
      big = a[i];
    }
    if(small > a[i])
    {
      small = a[i];
    }
  }

  printf("Largest element: %d\n", big);
  printf("smallest element: %d\n", small);

  return 0;

}