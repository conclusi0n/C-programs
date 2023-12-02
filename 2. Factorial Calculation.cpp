#include <stdio.h>

int main() {
    int num, factorial = 1;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    // Display the result
    printf("Factorial: %d\n", factorial);

    return 0;
}

