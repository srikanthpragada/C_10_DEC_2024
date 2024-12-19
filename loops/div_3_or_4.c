//  Print numbers that are divisible by 3 or 4

#include <stdio.h>

void main()
{
 int sn, en, n;

     printf("Enter two numbers :");
     scanf("%d%d", &sn, &en);

     n = sn;

     while (n <= en)
     {
         if(n % 3 == 0 || n % 4 == 0)
             printf("%d ", n);

         n ++;
     }
}
