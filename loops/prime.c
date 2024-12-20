//  Take a number and display whether it is a prime number

#include <stdio.h>

void main()
{
  int num, i;

    printf("Enter a number :");
    scanf("%d",&num);

    for(i = 2; i <= num/2; i ++)
    {
       if(num % i == 0)
       {
          printf("Not a prime number!");
          break;
       }

    }

    if(i > num/2)
         printf("Prime Number!");

}
