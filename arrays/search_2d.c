
#include <stdio.h>
#include <stdlib.h>


void main()
{
   int a[5][5];
   int r, c, sn, found = 0;

      srand(time(0)); // initialize seed

      for(r = 0; r < 5; r ++)
      {
          for(c = 0;  c < 5; c ++)
          {
            a[r][c] = rand() % 25;
            printf("%5d", a[r][c]);
          }
          printf("\n");
      }

      printf("Enter a number :");
      scanf("%d", &sn);


      for(r = 0; r < 5; r ++)
      {
          for(c = 0;  c < 5; c ++)
          {
             if(a[r][c] == sn)
             {
                 printf("Found at %d,%d\n", r, c);
                 found = 1;
                 break;
             }
          }

          if(found)
             break;  // break outerloop
      }

      if(!found)
        printf("Sorry! Number not found!");



}