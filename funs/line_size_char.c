#include <stdio.h>
#include <string.h>

// user-defined function
void line(int len, char ch)
{
 int i;

     for(i = 1; i <= len; i ++)
         putch(ch);
}


void main()
{
     line(25, '*');  // call function

     printf("\nSrikanth Technologies\n");

     line(30, '.');
}
