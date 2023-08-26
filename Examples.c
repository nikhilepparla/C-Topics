#include <stdio.h>

int main()
{
  int arr[] = {10, 11, 12, 190, 89};
  int min, max;
  min = max = arr[0];
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
    else if (min > arr[i])
    {
      min = arr[i];
    }
  }
  printf("MAX is %d MIN is %d", max, min);
}