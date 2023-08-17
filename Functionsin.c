#include <stdio.h>
// Recurssion
void fun(int n, int initial)
{
  if (n < initial)
    return;
  printf("Nikhil\n");
  fun(n - 1, initial);
}
int main()
{
  fun(3, 1);
}