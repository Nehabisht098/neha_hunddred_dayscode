//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input string
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin); // Reads string including spaces

    // Convert to uppercase manually
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // or subtract 32
        }
        i++;
    }

    // Display result
    printf("Uppercase string: %s\n", str);

    return 0;
}
