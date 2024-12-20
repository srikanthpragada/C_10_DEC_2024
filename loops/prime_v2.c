//  Take a number and display whether it is a prime number

#include <stdio.h>

void main()
{
  int num, i;
  int prime = 1; // true

    printf("Enter a number :");
    scanf("%d",&num);

    for(i = 2; i <= num/2; i ++)
    {
       if(num % i == 0)
       {
          printf("Not a prime number!");
          prime = 0; // false
          break;
       }
    }

    if(prime)
         printf("Prime Number!");

}
