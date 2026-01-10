#include <stdio.h>

int main() {
    int i, j, rounded;

    printf("Enter i: ");
    scanf("%d", &i);

    printf("Enter j: ");
    scanf("%d", &j);

    if (i % j == 0) {
        rounded = i;
    } else {
        rounded = i + (j - (i % j));
    }

    printf("Rounded value = %d\n", rounded);

    return 0;
}


