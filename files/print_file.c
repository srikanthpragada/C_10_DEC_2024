// Takes filename as command-line argument and prints its contents

#include <stdio.h>


void main(int argc, char * argv[])
{
  FILE * fp;
  int i, ch, print_line_numbers = 0, lineno = 1;

     if (argc < 2)
     {
         printf("Usage : print_file  <filename>  [-ln] \n");
         printf("\nFilename is whose contents you want to print.\n");
         exit(0);
     }

     fp = fopen(argv[1], "rt");

     if(fp == NULL)   // error
     {
         printf("Sorry! Could not open file -> %s", argv[1]);
         exit(1);
     }

     if (argc >= 3)
     {
         if (strcmp(argv[2], "-ln") == 0)
         {
             print_line_numbers = 1;
         }
     }

     if (print_line_numbers)
         printf("%5d: ",lineno);

     while(1)
     {
        ch = fgetc(fp);
        if(ch == EOF)
            break;

        putch(ch);

        if (print_line_numbers)
        {
          if(ch == '\n')
          {
             lineno ++;
             printf("%5d: ",lineno);
          }
        }
     }

     fclose(fp);
}
