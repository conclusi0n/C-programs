#include <stdio.h>

int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = add(a, b);

    printf("Sum: %d\n", result);

    return 0;
}

