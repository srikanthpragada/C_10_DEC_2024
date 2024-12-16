/*
   Program to take price and display net price
   Date : 16-DEC-2024
*/


#include <stdio.h>

void main()
{
  int price, net_price, discount;


    printf("Enter price:");
    scanf("%d",&price);

    if(price > 10000)
    {
         discount = price * 10 / 100;
    }
    else
    {
         discount = price * 5 / 100;
    }


    net_price = price - discount;
    printf("Price        :%6d\n", price);
    printf("- Discount   :%6d\n", discount);
    printf("Net Price    :%6d\n", net_price);

}
