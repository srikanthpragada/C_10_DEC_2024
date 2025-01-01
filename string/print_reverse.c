#include <stdio.h>
#include <string.h>


void main()
{
   char st[30];
   int i;


      printf("Enter a string :");
      gets(st);


      for( i = strlen(st) - 1; i >= 0; i --)
      {
           putch(st[i]);
      }

}
