// Take a number and check whether it is divisible by 2 or 3

#include <stdio.h>

void main()
{
 int number;

   printf("Enter a number: ");
   scanf("%d", &number);

   if (number % 2 == 0 || number % 3 == 0)
       printf("Divisible by 2 or 3");
   else
       printf("Not divisible by 2 or 3");

}
