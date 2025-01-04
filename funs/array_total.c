#include <stdio.h>
#include <string.h>

int equal(int a[5],int b[5])
{
int i;

  for(i = 0; i < 5; i++)
  {
    if(a[i] != b[i])
    {
       return 0;
    }
  }

  return 1;
}


void main()
{
  int a[5] = {1,2,3,4,5};
  int b[5] = {1,2,9,4,5};

  printf("Equal = %d",equal(a,b));
}
