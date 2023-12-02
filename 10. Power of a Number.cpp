#include <stdio.h>

double power(double base, int exponent) {
    double result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

int main() {
    double base, result;
    int exponent;

    // Input base and exponent from the user
    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calculate and display the result
    result = power(base, exponent);
    printf("%lf raised to the power of %d is %lf\n", base, exponent, result);

    return 0;
}

