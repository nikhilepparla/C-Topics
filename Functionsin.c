#include <stdio.h>
int main()
{
  int x = 10, y = 20;
  int z = (x++, x++);
  printf("%d", z);
}
//output is 11