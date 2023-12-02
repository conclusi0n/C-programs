#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the sum of digits
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    // Display the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}

