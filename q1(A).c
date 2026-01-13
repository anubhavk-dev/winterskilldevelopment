#include <stdio.h>

int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main() {
    int n, a, b;
    int lcm, result;

    scanf("%d %d %d", &n, &a, &b);

    lcm = (a * b) / gcd(a, b);

    if (n % lcm == 0)
        result = n;
    else
        result = ((n / lcm) + 1) * lcm;

    printf("%d\n", result);

    return 0;
}
