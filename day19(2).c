//write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Make sure to work with positive value
    if (num < 0) {
        num = -num;
    }

    // Calculate sum of digits
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    // Display result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
