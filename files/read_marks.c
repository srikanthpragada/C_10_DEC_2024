#include <stdio.h>
#define FILENAME  "marks.dat"


void main()
{
  FILE * fp;
  int i, count, marks;

     fp = fopen(FILENAME, "rb");

     if(fp == NULL)   // error
     {
         printf("Sorry! Could not open file!");
         exit(1);
     }


     while(1)
     {
        //read an int
        count =  fread(&marks, sizeof(int), 1, fp);
        if(count == 0)
            break;

        printf("%d ", marks);
     }

     fclose(fp);

}
