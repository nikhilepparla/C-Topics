#include <stdio.h>
// find the nth value formulae is
// an = a1 +(n-1)*d
int main()
{
  int a1, d, an, n;
  a1 = 1;
  d = 3;
  n = 7;
  an = 0;
  an = a1 + (n - 1) * d;
  printf("nth value of given data is %d", an);
}