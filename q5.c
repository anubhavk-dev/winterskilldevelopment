#include <stdio.h>

int main()
{
    int sales = 100;
    int profit_per_unit = 500;
    int fixed_cost = 10000;
    int advertising = 1000;

    int prev_sales = sales;
    int prev_advertising = advertising;
    int prev_profit;

    int net_profit;

    /* Initial profit */
    net_profit = (sales * profit_per_unit) - fixed_cost - advertising;
    prev_profit = net_profit;

    while (1)
    {
        /* Double advertising */
        advertising = advertising * 2;

        /* Increase sales by 20% */
        sales = sales + (sales * 20) / 100;

        /* Calculate new profit */
        net_profit = (sales * profit_per_unit) - fixed_cost - advertising;

        /* Check if profit declined */
        if (net_profit < prev_profit)
        {
            break;
        }

        /* Store previous best values */
        prev_profit = net_profit;
        prev_sales = sales;
        prev_advertising = advertising;
    }

    printf("\nBest Performance Before Profit Decline:\n");
    printf("Super-Duper Sales: %d units\n", prev_sales);
    printf("Advertising Budget: Rs %d\n", prev_advertising);
    printf("Net Profit: Rs %d\n", prev_profit);

    return 0;
}

