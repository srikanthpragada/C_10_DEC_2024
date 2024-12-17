#include <stdio.h>

void main()
{
   int marks;

    printf("Enter Marks : ");
    scanf("%d", &marks);

    if(marks > 80)
      printf("A");
    else
      if(marks > 60)
        printf("B");
      else
        if(marks >= 50)
          printf("C");
        else
          printf("F");
}
