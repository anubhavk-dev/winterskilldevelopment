#include <stdio.h>

int main()
{
    int n, count = 0, sum = 0, digit;

    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        sum += digit;
        count++;
        n /= 10;
    }

    printf("Digits =%d\n", count);
    printf("Sum =%d", sum);

    return 0;
}
