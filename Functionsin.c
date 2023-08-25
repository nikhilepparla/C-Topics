#include <stdio.h>
#define MAX 10
#define NUM 5
int main()
{
  int arr[MAX] = {0};
  int array[NUM] = {5, 3, 2, 5};
  for (int i = 0; i < NUM; i++)
  {
    int value = array[i];
    if (arr[value] == 1)
    {
      printf("Duplicate values %d", array[i]);
      break;
    }
    else
      printf("Not ducplicte values %d\n", array[i]);
    arr[array[i]] = 1;
  }
}