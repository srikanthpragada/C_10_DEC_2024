#include <stdio.h>
#include <string.h>


int find_chr(char str[20],char ch)
{
 int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
           return i;
        }
    }

    return -1;
}

void main()
{
     printf("%d ",find_chr("Hello",'a'));
}


