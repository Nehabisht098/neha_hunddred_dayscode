//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    long long binary, digit, result = 0, place = 1;

    // Prompt user for input
    printf("Enter a binary number (as an integer): ");
    scanf("%lld", &binary);

    // Process each digit
    while (binary != 0) {
        digit = binary % 10;

        // Flip the bit: 0 becomes 1, 1 becomes 0
        if (digit == 0)
            result += 1 * place;
        else if (digit == 1)
            result += 0 * place;
        else {
            printf("Invalid binary digit '%lld' found.\n", digit);
            return 1;
        }

        binary /= 10;
        place *= 10;
    }

    // Display result
    printf("1's Complement: %lld\n", result);

    return 0;
}
