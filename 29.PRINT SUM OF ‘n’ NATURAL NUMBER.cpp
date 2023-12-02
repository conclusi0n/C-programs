#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Display the sum of natural numbers
    printf("Sum of first %d natural numbers: %d\n", num, sumOfNaturalNumbers(num));

    return 0;
}

