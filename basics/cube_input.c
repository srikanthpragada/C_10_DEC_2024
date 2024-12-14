/*
   Print cube of a number taken from user
   Date : 13-DEC-2024
*/


#include <stdio.h>

void main()
{
   int num, cube;  // variables

     // input
     printf("Enter a number :");
     scanf("%d", &num);

     // process
     cube = num * num * num;

     // output
     printf("Cube of %d is %d", num, cube);

}
