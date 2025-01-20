#include <stdio.h>
#define FILENAME  "marks.dat"


void main()
{
  FILE * fp;
  int i, count,pos, rollno, marks;

     fp = fopen(FILENAME, "rb");

     if(fp == NULL)   // error
     {
         printf("Sorry! Could not open file!");
         exit(1);
     }


     while(1)
     {
        printf("Enter rollno [0 to stop] :");
        scanf("%d", &rollno);

        if(rollno == 0)
            break;

        // calculate position
        pos = sizeof(int) * (rollno - 1);
        fseek(fp, pos, SEEK_SET);    // go to position from beginning of the file

        //read an int
        count =  fread(&marks, sizeof(int), 1, fp);
        if(count == 0)
            printf("Invalid rollno!\n");
        else
            printf("Marks of rollno %d are %d\n", rollno, marks);
     }

     fclose(fp);

}
