#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the Fibonacci series
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; ++i) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

