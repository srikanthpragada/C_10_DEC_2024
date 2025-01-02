#include <stdio.h>
#include <string.h>


void main()
{
   char name[20], largest[20];
   int i;


      strcpy(largest, "");

      for(i = 1; i <= 5; i ++)
      {
         printf("Enter your name :");
         gets(name);

         if (strlen(name) > strlen(largest))
               strcpy(largest, name);
      }

      printf("Largest name = %s", largest);
}
