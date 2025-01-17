#include <stdio.h>


void main()
{
  FILE * fp, *tp;
  char filename[30];
  char ch;


     printf("Enter filename :");
     gets(filename);

     fp = fopen(filename, "rt");
     tp = fopen("tempfile.txt", "wt");

     if(fp == NULL)   // error
     {
         printf("Sorry! Could not open file!");
         exit(1);
     }

     if(tp == NULL)   // error
     {
         printf("Sorry! Could not open temp file!");
         exit(2);
     }

     while(1)
     {
         ch = fgetc(fp);
         if(ch == EOF)
            break;

         fputc(ch + 1, tp);
     }

     fclose(fp);
     fclose(tp);

}
