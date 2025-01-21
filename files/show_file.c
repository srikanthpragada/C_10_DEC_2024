// Takes filename as command-line argument and prints its contents

#include <stdio.h>


void main(int argc, char * argv[])
{
  FILE * fp;
  int i, ch, print_line_numbers = 0, lineno = 1;
  char line[100], * p;

     if (argc < 2)
     {
         printf("Usage : show_file  <filename>  [-ln] \n");
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



     while(1)
     {
        p = fgets(line, 100, fp);
        if(p == NULL)
            break;

        if (print_line_numbers)
        {
          printf("%5d: ",lineno);
          lineno ++;
        }

        printf(line);
     }

     fclose(fp);
}
