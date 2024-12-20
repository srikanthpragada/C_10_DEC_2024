//  Take a number and display avg of given numbers

#include <stdio.h>

void main()
{
  int num, i;
  float total = 0, count = 0;


    while(1)
    {
       printf("Enter a number [0 to stop] :");
       scanf("%d",&num);

       if(num == 0)
           break;

       total += num;
       count ++;
    }


    printf("Average = %.2f", total / count);

}
