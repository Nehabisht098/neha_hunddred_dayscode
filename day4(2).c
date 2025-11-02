#include <stdio.h>

int main() {
    int n, sum;

    // Prompt user for input
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    // Calculate sum using formula: sum = n * (n + 1) / 2
    sum = n * (n + 1) / 2;

    // Display result
    printf("Sum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}
