#include <stdio.h>

void convert(int n, int base, char result[])
{
    int i = 0, rem;
    char temp[50];

    while (n > 0)
    {
        rem = n % base;
        if (rem < 10)
            temp[i++] = rem + '0';
        else
            temp[i++] = rem - 10 + 'A';

        n /= base;
    }

    // Reverse the result
    int j = 0;
    while (i > 0)
        result[j++] = temp[--i];

    result[j] = '\0';
}

int main()
{
    int number, base1, base2;
    char res1[50], res2[50];

    scanf("%d %d %d", &number, &base1, &base2);

    convert(number, base1, res1);
    convert(number, base2, res2);

    printf("%d %d %s %d %s", number, base1, res1, base2, res2);

    return 0;
}
