
#include <stdio.h>

void main()
{
   char ch;

       printf("Enter char :");
       ch = getchar();

       if(ch >= 'A' && ch <= 'Z')
          printf("Uppercase!");
       else
         if(ch >= 97 && ch <= 122)
           printf("Lowercase!");
         else
           printf("Others");

}
