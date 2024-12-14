/*
   Take inches and print centimeters
   Date : 13-DEC-2024
*/


#include <stdio.h>

void main()
{
   float inches, centimeters;

     // input
     printf("Enter inches :");
     scanf("%f", &inches);

     // process
     centimeters = inches * 2.54;

     // output
     printf("%.2f inches = %.2f centimeters", inches, centimeters);
}
