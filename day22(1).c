#include <stdio.h>

// Function to calculate factorial of a number
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, temp;
    unsigned long long sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    while (temp > 0) {
        int digit = temp % 10; 
        fact = factorial(digit);
        sum += fact;
        temp /= 10; 
    }

    if (sum == number)
        printf("%d is a strong number.\n", number);
    else
        printf("%d is not a strong number.\n", number);

    return 0;
}