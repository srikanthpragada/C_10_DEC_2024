/*
   Program to take a number and display whether it is even or odd
   Date : 16-DEC-2024
*/


#include <stdio.h>

void main()
{
int num;
    printf("Enter a num:");
    scanf("%d",&num);

    if(num % 2 == 0)
       printf("Number is even");
    else
       printf("Number is odd");

}
