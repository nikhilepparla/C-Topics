#include <stdio.h>
struct NewName
{
  char b;
  char a[10];
};

int main()
{
  struct NewName x1;
  x1 = {'a'};
  printf("%s", x1.a[0]);
}
