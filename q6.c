#include <stdio.h>

int main()
{
    int r, x, y;
    int count = 0;

    printf("Enter radius r: ");
    scanf("%d", &r);

    for (x = -r; x <= r; x++)
    {
        for (y = -r; y <= r; y++)
        {
            if (x*x + y*y <= r*r)
            {
                count++;
            }
        }
    }

    printf("Number of integer points inside the circle: %d\n", count);

    return 0;
}

