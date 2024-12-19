//  Print odd numbers between two numbers

#include <stdio.h>

void main()
{
 int sn, en, n;

     printf("Enter two numbers :");
     scanf("%d%d", &sn, &en);

     n = sn % 2 == 1 ? sn : sn + 1;

     while (n <= en)
     {
         printf("%d ", n);
         n += 2;
     }
}
