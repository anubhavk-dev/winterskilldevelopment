#include <stdio.h>

int main() {
    int n, i;
    int value;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        value = i * i;

        if (value > 200)
            break;

        printf("%d ", value);
    }

    return 0;
}

