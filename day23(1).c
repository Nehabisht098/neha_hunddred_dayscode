//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.


#include <stdio.h>

int main() {
    int n, i;
    float numerator = 2.0, denominator = 3.0, sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);
    return 0;
}
