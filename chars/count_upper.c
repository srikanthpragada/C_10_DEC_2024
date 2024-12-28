
#include <stdio.h>

void main()
{
   char ch;
   int i, count = 0;

      for(i = 1; i <= 10; i ++)
      {

       printf("Enter char :");
       ch = getchar();

       fflush(stdin);  // clear keyboard buffer

       if(ch >= 'A' && ch <= 'Z')
            count ++;
      }

      printf("Count = %d", count);
}
