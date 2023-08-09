#include <stdio.h>

int main()
{
  float cel, far;
  int start = 0, increment = 20, end = 200;
  while (far <= end)
  {
    cel = (far - 32.0) * (5.0 / 9.0);
    printf(" Fahnrenheit %2.2f  celsius = %.2f\n", far, cel);
    far = far + increment;
  }
}