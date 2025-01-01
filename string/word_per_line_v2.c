#include <stdio.h>
#include <string.h>


void main()
{
   char st[50];
   int i, space_found = 0;

      printf("Enter a string :");
      gets(st);

      for(i = 0; st[i] != '\0'; i ++)
      {
         if(isspace(st[i]))
         {
             if(!space_found)
             {
              putch('\n');
              space_found = 1;
             }
         }
         else
         {
             putch(st[i]);
             space_found = 0;
         }
      }

}
