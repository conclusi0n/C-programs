#include <stdio.h>

void displayFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; ++i) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms for Fibonacci Series: ");
    scanf("%d", &terms);

    displayFibonacci(terms);

    return 0;
}

