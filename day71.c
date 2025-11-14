#include<stdio.h>


int main() {
    FILE *file;
    char name[100];
    int age;

    // Open the file in write mode
    file = fopen("info.txt", "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Get user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write to the file
    fprintf(file, "Name: %s", name);
    fprintf(file, "Age: %d\n", age);

    // Close the file
    fclose(file);

    // Confirmation message
    printf("Data successfully saved to info.txt\n");

    return 0;
}


