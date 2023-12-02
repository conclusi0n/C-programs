#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess, userGuess, attempts = 0;
    srand(time(0));

    // Generate a random number between 1 and 100
    numberToGuess = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");

    do {
        // Input a guess from the user
        printf("Enter your guess (between 1 and 100): ");
        scanf("%d", &userGuess);
        ++attempts;

        // Check if the guess is correct
        if (userGuess == numberToGuess) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        } else if (userGuess < numberToGuess) {
            printf("Too low. Try again!\n");
        } else {
            printf("Too high. Try again!\n");
        }
    } while (userGuess != numberToGuess);

    return 0;
}

