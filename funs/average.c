#include <stdio.h>


// Function Declaration
float average(int n1, int n2);


void main()
{
   printf("%f", average(10,15));
}

// Function Definition
float average(int n1, int n2)
{
     return (n1 + n2) / 2.0;
}
