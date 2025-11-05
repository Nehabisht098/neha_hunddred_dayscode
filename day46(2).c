//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}; // Frequency array for lowercase letters
    int i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the string
    while (str[i] != '\0') {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
            freq[ch - 'a']++;
        }
        i++;
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
