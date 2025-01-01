#include <stdio.h>
#include <string.h>


void main()
{
   char names[5][20]; // array of strings
   int i;

      for(i = 0; i < 5; i ++)
      {
         printf("Enter your name :");
         gets(names[i]);
      }

      for(i = 0; i < 5; i ++)
      {
         puts(strupr(names[i]));
      }
}
