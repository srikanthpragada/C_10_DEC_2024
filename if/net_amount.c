#include <stdio.h>

void main()
{
   int qty, price, amount, discount, net_amount;

    printf("Enter quantity : ");
    scanf("%d", &qty);

    printf("Enter Price    : ");
    scanf("%d", &price);

    amount = qty * price;

    if (qty > 2)
    {
        discount = amount * 10 / 100;
    }
    else
    {
        discount = amount * 5 / 100;
    }

    net_amount = amount - discount;

    printf("Net Amount : %d", net_amount);

}
