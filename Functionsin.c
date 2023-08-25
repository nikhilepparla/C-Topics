#include <stdio.h>
#define N 2
int main()
{
  int arr[N];
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = N - 1; i >= 0; i--)
  {
    printf("%d\t", arr[i]);
  }
}