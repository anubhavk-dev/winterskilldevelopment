#include <stdio.h>

int main()
{
    int n, base, rem;
    char result[50];
    int i = 0;

    scanf("%d %d", &n, &base);

    while (n > 0)
    {
        rem = n % base;

        if (rem < 10)
            result[i++] = rem + '0';
        else
            result[i++] = rem - 10 + 'A';

        n /= base;
    }

    // Print in reverse order
    for (i = i - 1; i >= 0; i--)
        printf("%c", result[i]);

    return 0;
}
