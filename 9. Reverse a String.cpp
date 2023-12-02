#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Reverse the string
    printf("Reversed String: ");
    for (int i = strlen(str) - 1; i >= 0; --i) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}

