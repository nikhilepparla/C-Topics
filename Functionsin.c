#include <stdio.h>
void f(int *, int *);
int main()
{
  int a = 20, b = 30;
  // a++;
  f(&a, &b);
  printf("a = %d b = %d", a, b);
}
void f(int *x, int *y)
{
  int temp = *x;
  temp++;
  temp++;
  *x = temp;
}