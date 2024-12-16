/*
   Program to take salary and display net salary
   Date : 16-DEC-2024
*/


#include <stdio.h>

void main()
{
   int salary, hra, da, gross_salary, tax, net_salary;


     printf("Enter Salary :");
     scanf("%d", &salary);

     hra = salary * 30 / 100;
     da = salary * 15 / 100;
     gross_salary = salary + hra + da;
     tax = gross_salary * 20 /100;
     net_salary = gross_salary - tax;

     printf("Salary         : %6d\n", salary);
     printf("+ HRA          : %6d\n", hra);
     printf("+ DA           : %6d\n", da);
     printf("Gross Salary   : %6d\n", gross_salary);
     printf("- Tax          : %6d\n", tax);
     printf("Net Salary     : %6d\n", net_salary);

}
