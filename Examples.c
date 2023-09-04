#include <stdio.h>
int main()
{
  static int a[] = {10, 20, 30, 40, 50};
  // This will subtract 40-30
  printf("%d", a[3] - a[2]);
  // compiler will do the operation like this
  printf("%d", *(a + 3) - *(a + 2));
}