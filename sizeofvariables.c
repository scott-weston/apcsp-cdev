#include<stdio.h>

int main()
{
  int a = 545;
  char b ='A';
  float c = 6.9;
  double d = 420.69;
  long e = 123456789;
  short f = 1;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char b value: %c and size: %d bytes\n", b, sizeof(b));
  printf("float c value: %.1f and size: %d bytes\n", c, sizeof(c));
  printf("double d value: %.2f and size: %d bytes\n", d,  sizeof(d));
  printf("long e value: %ld and size: %d bytes\n", e, sizeof(e));
  printf("short f value: %d and size: %d bytes\n", f, sizeof(f));
}

