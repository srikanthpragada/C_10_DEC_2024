//  Take a number and display its factors

#include <stdio.h>

void main()
{
  int num, i;

    printf("Enter a number :");
    scanf("%d",&num);

    for(i = 2; i <= num/2; i ++)
    {
       if(num % i == 0)
          printf("%d ", i);
    }


}
