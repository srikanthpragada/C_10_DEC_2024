#include <stdio.h>
#include <string.h>


void print_array(int a[10])
{
 int i;

   for(i = 0; i < 10; i ++)
       printf("%d\n", a[i]);
}


void main()
{
  int arr[10];

      // fill array

      print_array(arr);
}
