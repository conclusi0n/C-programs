#include <stdio.h>

int binaryToDecimal(long long binaryNum) {
    int decimalNum = 0, base = 1, remainder;

    while (binaryNum != 0) {
        remainder = binaryNum % 10;
        decimalNum += remainder * base;
        binaryNum /= 10;
        base *= 2;
    }

    return decimalNum;
}

int main() {
    long long binaryNum;

    // Input a binary number from the user
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    // Convert and display the decimal equivalent
    printf("Decimal equivalent: %d\n", binaryToDecimal(binaryNum));

    return 0;
}

