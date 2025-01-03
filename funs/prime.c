#include <stdio.h>
#include <string.h>


int isprime(int num)
{
 int i;

    for(i = 2; i <= num/2;  i ++)
    {
        if (num % i == 0)
             return 0;   // return false
    }

    return 1; // prime number
}



void main()
{

    printf("%d\n", isprime(129));
    printf("%d", isprime(19));

}


