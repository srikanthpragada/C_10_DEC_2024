#include <stdio.h>
#include <string.h>


int max(int a, int b)
{
   if(a > b)
      return a;
   else
      return b;
}


void main()
{
 int big;

     big = max(10, 15);

     printf("%d ", big);
     printf("%d ", max(100, 50));

}
