#include <stdio.h>

int findLCM(int a, int b) {
    int max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        ++max;
    }
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate and display the LCM
    printf("LCM of %d and %d is %d\n", num1, num2, findLCM(num1, num2));

    return 0;
}

