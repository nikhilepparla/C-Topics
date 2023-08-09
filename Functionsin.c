#include <stdio.h>
// find the nth value formulae is
// an = a1 +(n-1)*d
int main()
{
  float hour, min;
  min = 1 * 60.0;
  hour = 60 * min;
  unsigned input;
  scanf("%u", &input);
  printf("Milutes is %f", input / min);
  printf("Hours is %f", input / hour);
}