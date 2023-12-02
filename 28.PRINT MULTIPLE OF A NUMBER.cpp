#include <stdio.h>

void printMultiples(int num, int count) {
    printf("Multiples of %d: ", num);
    for (int i = 1; i <= count; ++i) {
        printf("%d, ", num * i);
    }
    printf("\n");
}

int main() {
    int num, count;

    // Input a number and count from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the count of multiples: ");
    scanf("%d", &count);

    // Display the multiples
    printMultiples(num, count);

    return 0;
}

