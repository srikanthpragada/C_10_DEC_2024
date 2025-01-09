
# include <stdio.h>

struct student
{
   int admno;
   char name [20];
   char email [30];
   char course[10];
};


void main()
{
  struct student s1, s2;
  struct student students[10];


     s1.admno = 1;
     strcpy(s1.name, "Tom");
     strcpy(s1.email, "tom@gmail.com");
     strcpy(s1.course, "Java");


     printf("%d %s %s %s", s1.admno, s1.name, s1.email, s1.course);

}
