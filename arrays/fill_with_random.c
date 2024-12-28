
#include <stdio.h>
#include <stdlib.h>


void main()
{
   int a[10];
   int i;

      srand(time(0)); // initialise seed

      for(i = 0; i < 10; i ++)
      {
           a[i] = rand() % 25;

           printf("%d\n", a[i]);
      }
}
