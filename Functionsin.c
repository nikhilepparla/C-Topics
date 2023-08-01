#include <stdio.h>
void f(int, int);
int main()
{
  int a = 20, b = 30;
  printf("a = %d b = %d", a, b);
}
void f(int x, int y)
{
  x++;
  y++;
}