#include <stdio.h>

int f1(void);

int f2(void);

int f3(void);

int x = 10;

int main()

{
  int x = 1;

  x += f1() + f2() + f3() + f2();

  printf("\n%d", x);

  return 0;
}

int f1()
{
  int x = 25;
  x++;
  printf("f1 %d", x);
  return x;
}

int f2()
{
  static int x = 50;
  x++;
  printf("f2 %d", x);

  return x;
}

int f3()
{
  x *= 10;
  printf("f3 %d", x);
  
  return x;
}
//O/P = 230