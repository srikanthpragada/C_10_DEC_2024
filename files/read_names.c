
#include <stdio.h>


void main()
{
  FILE * fp;
  int i, ch;


     fp = fopen("names.txt", "rt");

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
