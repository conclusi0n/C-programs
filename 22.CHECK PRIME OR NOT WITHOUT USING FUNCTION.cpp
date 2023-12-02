#include <stdio.h>

int main() {
    int num, isPrime = 1;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Display the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

