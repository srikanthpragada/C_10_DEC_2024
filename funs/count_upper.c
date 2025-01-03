#include <stdio.h>
#include <string.h>


int count_upper(char st[50])
{
 int i, count = 0;

    for(i = 0; st[i] != '\0'; i ++)
    {
        if(isupper(st[i]))
              count ++;
    }

    return count;
}



void main()
{
    printf("Count = %d", count_upper("HellOOO"));
}


