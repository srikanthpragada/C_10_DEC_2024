#include <stdio.h>

// Pass by reference/address

void zero(int * p)
{
    *p = 0;
}


void main()
{
  int a = 100;

    zero(&a);

    printf("a = %d", a);
}
