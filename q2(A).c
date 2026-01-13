#include <stdio.h>

int main() {
    float a, b, result;
    char op;
    int valid = 1;

    scanf("%f %c %f", &a, &op, &b);

    switch (op) {
        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;

        case '*':
            result = a * b;
            break;

        case '/':
            if (b == 0) {
                printf("Error: Division by zero");
                valid = 0;
            } else {
                result = a / b;
            }
            break;

        default:
            printf("Error: Invalid operator");
            valid = 0;
    }

    if (valid)
        printf("Result = %.2f", result);

    return 0;
}
