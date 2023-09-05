#include <stdio.h>
// TODO Little and Big Endian
void showEndian(char *start, int count)
{
  for (int i = 0; i < count; i++)
  {
    printf("%.2x\t", start[i]);
  }
}
int main()
{
  int a = 0x01234567;
  showEndian((char *)&a, sizeof(a));
}

//if o/p is 67 45 23 02 Little Endian
//if o/p is 01 23 45 67 Big Endian