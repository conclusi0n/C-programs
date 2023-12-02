#include <stdio.h>

long long decimalToBinary(int decimalNum) {
    long long binaryNum = 0;
    int remainder, base = 1;

    while (decimalNum > 0) {
        remainder = decimalNum % 2;
        binaryNum += remainder * base;
        decimalNum /= 2;
        base *= 10;
    }

    return binaryNum;
}

int main() {
    int decimalNum;

    // Input a decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Convert and display the binary equivalent
    printf("Binary equivalent: %lld\n", decimalToBinary(decimalNum));

    return 0;
}

