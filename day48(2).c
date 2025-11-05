//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    char *wordStart = NULL, *temp = NULL;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    wordStart = temp = str;

    while (*temp) {
        if (*temp == ' ') {
            reverseWord(wordStart, temp - 1);
            wordStart = temp + 1;
        }
        temp++;
    }

    // Reverse the last word
    reverseWord(wordStart, temp - 1);

    // Output result
    printf("Sentence with each word reversed:\n%s\n", str);

    return 0;
}
