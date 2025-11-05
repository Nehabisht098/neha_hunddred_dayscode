//Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Reads string including spaces

    // Count characters manually
    while (str[i] != '\0') {
        count++;
        i++;
    }

    // Adjust for newline character if present
    if (str[count - 1] == '\n') {
        count--;
    }

    // Display result
    printf("Number of characters in the string: %d\n", count);

    return 0;
}
