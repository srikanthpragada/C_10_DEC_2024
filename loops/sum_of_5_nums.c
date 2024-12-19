//  To take 5 numbers and display total

#include <stdio.h>

void main()
{
  int num, total = 0, i;

    for(i = 1;i <= 5; i ++)
    {
        printf("Enter a number :");
        scanf("%d",&num);
        total += num;
    }

    printf("Total = %d",total);
}
