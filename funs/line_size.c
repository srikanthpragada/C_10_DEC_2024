#include <stdio.h>
#include <string.h>

// user-defined function
void line(int len)
{
 int i;

     for(i = 1; i <= len; i ++)
         printf("=");
}


void main()
{

     line(25);  // call function

     printf("\nSrikanth Technologies\n");

     line(30);
}
