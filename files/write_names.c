
#include <stdio.h>


void main()
{
  FILE * fp;
  char * names[] = {"Java", "Python", "JavaScript", "C#"};
  int i;


     fp = fopen("names.txt", "wt");

     if(fp == NULL)   // error
     {
         printf("Sorry! Could not open file!");
         exit(1);
     }

     for(i = 0; i < 4; i ++)
     {
         fprintf(fp, "%s\n", names[i]);
     }

     fclose(fp);
}
