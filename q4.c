#include <stdio.h>

int main()
{
    int age;
    int made_in_india;      // 1 = Yes, 0 = No
    int accident_good;      // 1 = Good, 0 = Not Good
    float car_value;
    float premium = 0;
    int excess = 0;

    printf("Enter driver's age: ");
    scanf("%d", &age);

    printf("Enter declared value of car: ");
    scanf("%f", &car_value);

    printf("Is the car manufactured in India? (1 = Yes, 0 = No): ");
    scanf("%d", &made_in_india);

    printf("Is the accident record good? (1 = Yes, 0 = No): ");
    scanf("%d", &accident_good);

    printf("\n--- Insurance Details ---\n");

    /* Driver age 25 or more */
    if (age >= 25)
    {
        if (made_in_india)
        {
            if (accident_good)
            {
                premium = 0.06 * car_value;
                excess = 0;
                printf("Policy Type: Comprehensive\n");
            }
            else
            {
                premium = 0.07 * car_value;
                excess = 100;
                printf("Policy Type: Comprehensive\n");
            }
        }
        else
        {
            if(accident_good)
            {
                premium = 0.06 * car_value;
                excess = 100;
                printf("Policy Type: Comprehensive\n");
            }
            else
            {
                premium = 0.07 * car_value;
                excess = 0;
                printf("Policy Type: Third Party\n");
            }
        }
    }

    /* Driver age less than 25 */
    else
    {
        if (made_in_india && accident_good)
        {
            premium = 0.06 * car_value;
            excess = 100;
            printf("Policy Type: Comprehensive\n");
        }
        else if (!made_in_india && accident_good)
        {
            premium = 0.08 * car_value;
            excess = 100;
            printf("Policy Type: Comprehensive\n");
        }
        else
        {
            printf("No policy can be issued due to high risk.\n");
            return 0;
        }
    }

    printf("Premium Amount: Rs %.2f\n", premium);
    if (excess > 0)
        printf("Excess Payable: Rs %d\n", excess);
    else
        printf("Excess Payable: None\n");

    return 0;
}

