/*
   Program to take marks and display result
   Date : 16-DEC-2024
*/


#include <stdio.h>

void main()
{
int price,discount;


    printf("Enter price:");
    scanf("%d",&price);

    if(price > 10000)
        printf("Discount : %d", price * 10/100);
    else
        printf("Discount : %d", price * 5/100);

}
