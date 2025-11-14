//Write a program to take a string input. Change it to sentence case.


#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toSentenceCase(char *str) {
    int capitalize = 1; // Flag to capitalize the next letter

    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        // Check for sentence-ending punctuation
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalize = 1;
        }
    }
}

int main() {
    char input[1000];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    toSentenceCase(input);

    printf("Sentence case: %s", input);

    return 0;
}

