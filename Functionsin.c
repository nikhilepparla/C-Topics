#include <stdio.h>
int main()
{
  int a = 9;
  if (a == 9)
    goto label1;
  printf("no jump");

label1:
  printf("number is 9");
}