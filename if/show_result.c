/*
   Program to take marks and display result
   Date : 16-DEC-2024
*/


#include <stdio.h>

void main()
{
   int marks;


     printf("Enter marks :");
     scanf("%d", &marks);

     if(marks >= 50)
        printf("Passed!");
     else
        printf("Failed!");

}
