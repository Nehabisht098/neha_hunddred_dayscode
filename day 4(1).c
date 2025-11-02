#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Display before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
