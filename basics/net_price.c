/*
   Program to take price, discount rate and display net price
   Date : 14-DEC-2024
*/


#include <stdio.h>

void main()
{
   int price, discount, net_price;
   float disrate;


     printf("Enter the price :");
     scanf("%d", &price);

     printf("Enter the discount rate :");
     scanf("%f", &disrate);

     discount = price * disrate / 100;
     net_price = price - discount;


     printf("Price         : %6d\n", price);
     printf("Discount      : %6d\n", discount);
     printf("Net price     : %6d\n", net_price);

}
