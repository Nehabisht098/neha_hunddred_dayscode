//Print the initials of a name.

#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    // Input full name
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Print initials
    printf("Initials: ");
    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c", name[0]); // First character
    }

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]); // Character after space
        }
        i++;
    }

    printf("\n");
    return 0;
}
