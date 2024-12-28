#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[10];
  int i;


    srand(time(0));

    for(i = 0; i < 10; i++)
    {
        a[i] = rand() % 25;

        if (a[i] % 2 == 0)
        {
          printf("%d ", a[i]);
        }
    }

}
