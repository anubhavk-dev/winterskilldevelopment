#include <stdio.h>

int main()
{
    int n, rev = 0, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    /* Reverse the number */
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    /* Print digits in words */
    while (rev > 0)
    {
        digit = rev % 10;

        switch (digit)
        {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }

        rev = rev / 10;
    }

    return 0;
}
