//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i = 0;

    // Input full name
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    printf("Formatted name: ");

    // Print first initial
    if (name[0] != ' ') {
        printf("%c. ", name[0]);
    }

    // Traverse and find initials and surname
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            // Check if this is the last word (surname)
            int j = i + 1;
            int spaceFound = 0;
            while (name[j] != '\0') {
                if (name[j] == ' ') {
                    spaceFound = 1;
                    break;
                }
                j++;
            }

            if (spaceFound) {
                printf("%c. ", name[i + 1]); // Initial of middle name
            } else {
                printf("%s", &name[i + 1]); // Full surname
                break;
            }
        }
        i++;
    }

    printf("\n");
    return 0;
}
