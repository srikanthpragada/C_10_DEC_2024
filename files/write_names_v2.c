
#include <stdio.h>


void main()
{
  FILE * fp;
  char  name[20];
  int i;


     fp = fopen("names.txt", "wt");

     if(fp == NULL)   // error
     {
         printf("Sorry! Could not open file!");
         exit(1);
     }

     while(1)
     {
         printf("Enter name [end to stop] :");
         gets(name);

         if(strcmp(name, "end") == 0)
             break;

         fprintf(fp, "%s\n", name  // write to file
     }

     fclose(fp);
}
