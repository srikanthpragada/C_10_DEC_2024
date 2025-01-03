#include <stdio.h>
#include <string.h>


int largest_factor(int num)
{
 int i;

    for(i = num/2; i > 0; i --)
    {
        if (num % i == 0)
             return i;
    }
}



void main()
{

    printf("Largest factor for 129 : %d\n", largest_factor(129));
    printf("Largest factor for  19 : %d", largest_factor(19));

}


