#include <stdio.h>

int main()
{
    int n, temp, digit, count = 0, i;

    scanf("%d", &n);

    temp = n;

    // Count number of digits
    while (temp > 0)
    {
        count++;
        temp /= 10;
    }

    // Display digits from most significant to least
    for (i = count; i >= 1; i--)
    {
        int power = 1;
        int j;

        for (j = 1; j < i; j++)
            power *= 10;

        digit = (n / power) % 10;
        printf("Digit %d:%d\n", count - i + 1, digit);
    }

    return 0;
}
