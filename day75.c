//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char newLine[256];

    // Get the filename from the user
    printf("Enter the filename to append to: ");
    scanf("%s", filename);
    getchar(); // Consume leftover newline from scanf

    // Open the file in append mode
    file = fopen(filename, "a");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Get the new line of text from the user
    printf("Enter the line to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    // Append the text to the file
    fprintf(file, "%s", newLine);

    // Close the file
    fclose(file);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}


