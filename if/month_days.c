// Take month number and display no. of days in the month


#include <stdio.h>

void main()
{
 int month;

   printf("Enter month number [1-12]: ");
   scanf("%d", &month);

   if (month == 2)
       printf("28");
   else
      if(month == 4 || month == 6 || month == 9 || month == 11)
          printf("30");
      else
          printf("31");

}
