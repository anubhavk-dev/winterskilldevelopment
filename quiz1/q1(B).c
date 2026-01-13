#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2, real, imag;

    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation");
        return 0;
    }

    d = b*b - 4*a*c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Two distinct real roots: %.2f %.2f", r1, r2);
    } 
    else if (d == 0) {
        r1 = -b / (2*a);
        printf("Equal roots: %.2f %.2f", r1, r1);
    } 
    else {
        real = -b / (2*a);
        imag = sqrt(-d) / (2*a);
        printf("Complex roots: %.2f + %.2fi , %.2f - %.2fi",
               real, imag, real, imag);
    }

    return 0;
}
