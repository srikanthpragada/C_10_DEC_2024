#include <stdio.h>


void main()
{
  FILE * fp;
  char filename[30];
  int i, ch, lines = 0, words = 0, chars = 0;

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
        if(ch == EOF)  // end of file
            break;

        chars ++;

        if(ch == '\n')
        {
            lines ++;
            words ++;
        }
        else
            if(ch == ' ')
               words ++;
     }

     fclose(fp);

     printf("Lines : %d, Words : %d, Chars : %d", lines, words, chars);
}
