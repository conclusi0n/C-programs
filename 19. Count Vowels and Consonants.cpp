#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Count vowels and consonants
    for (int i = 0; str[i] != '\0'; ++i) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                ++vowels;
            } else {
                ++consonants;
            }
        }
    }

    // Display the result
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);

    return 0;
}

