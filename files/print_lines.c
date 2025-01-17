#include <stdio.h>


void main()
{
  FILE * fp;
  char filename[30];
  char line[100], * cp;


     printf("Enter filename :");
     gets(filename);

     fp = fopen(filename, "rt");

     if(fp == NULL)   // error
     {
         printf("Sorry! Could not open file!");
         exit(1);
     }

     while(1)
     {
         cp = fgets(line, 100, fp);
         if(cp == NULL) // end of file
            break;

         printf("%s", line);
     }

     fclose(fp);

}
