#include <stdio.h>

int getRandomNumber() {
    return rand();
}

int main() {
    int randomNum;

    randomNum = getRandomNumber();

    printf("Random Number: %d\n", randomNum);

    return 0;
}

