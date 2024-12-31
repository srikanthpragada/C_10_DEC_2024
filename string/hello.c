
#include <stdio.h>
#include <stdlib.h>


void main()
{
   char name[20];

      printf("Enter your name :");
      //scanf("%s", name);
      gets(name);

      printf("Hello %s", name);
}
