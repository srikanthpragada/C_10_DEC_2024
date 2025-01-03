#include <stdio.h>
#include <string.h>


int sum(int a[10])
{
 int i, total = 0;

    for(i = 0; i < 10 ; i ++)
    {
        total += a[i];
    }

    return total;
}



void main()
{
  int arr[10] = {1,5,4,3,2,9, 6,7,8,10};


    printf("Total  = %d", sum(arr));
}


