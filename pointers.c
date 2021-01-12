#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);
  int  t;
  int *d = 2;
  int *e = 1;
  printf("the value of d is %d and the value of e is %d", d, e);
     t   = *d;
    *d   = *e;
    *e   =  t;
  printf("the value of d is %d and the value of e is %d", d, e);
}
