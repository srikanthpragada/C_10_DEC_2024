#include <stdio.h>
#define FILENAME  "marks.dat"


void main()
{
  FILE * fp;
  int i, marks;

     fp = fopen(FILENAME, "wb");

     if(fp == NULL)   // error
     {
         printf("Sorry! Could not open file!");
         exit(1);
     }

     srand(time(0));
     for(i = 1; i <= 50; i ++)
     {
        marks = rand() % 100;
        // write marks into marks.dat
        fwrite(&marks, sizeof(int), 1, fp);
     }

     fclose(fp);

}
