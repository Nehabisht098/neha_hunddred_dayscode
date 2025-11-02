//Write a program to find the product of odd digits of a number.


#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOddDigit = 0;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Make sure to work with positive value
    if (num < 0) {
        num = -num;
    }

    // Extract and multiply odd digits
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOddDigit = 1;
        }
        num /= 10;
    }

    // Display result
    if (hasOddDigit)
        printf("Product of odd digits: %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
