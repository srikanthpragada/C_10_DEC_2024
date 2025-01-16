#include <stdio.h>


void main()
{
  FILE * fp;
  char filename[30];
  int i, ch;

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
        ch = fgetc(fp);
        if(ch == EOF)
            break;

        putch(ch);
     }

     fclose(fp);
}
