#include <stdio.h>

int main() {
    int n1, n2, d1, d2;
    int printed[10] = {0};   // to avoid duplicate printing

    scanf("%d %d", &n1, &n2);

    while (n1 > 0) {
        d1 = n1 % 10;
        int temp = n2;

        while (temp > 0) {
            d2 = temp % 10;

            if (d1 == d2 && printed[d1] == 0) {
                printf("%d ", d1);
                printed[d1] = 1;
                break;
            }
            temp /= 10;
        }
        n1 /= 10;
    }

    return 0;
}
