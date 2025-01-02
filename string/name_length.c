#include <stdio.h>
#include <string.h>


void main()
{
   char names[5][20];
   int i;


      for(i = 0; i < 5; i ++)
      {
         printf("Enter your name :");
         gets(names[i]);
      }

      for(i = 0; i < 5; i ++)
      {
         printf("%-20s  %2d\n", names[i], strlen(names[i]));
      }
}
