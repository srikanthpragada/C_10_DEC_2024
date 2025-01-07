#include <stdio.h>

// Pass by value

void zero(int n)
{
    n = 0;
}


void main()
{
  int a = 100;

    zero(a);

    printf("a = %d", a);
}
