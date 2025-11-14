////Write a prt array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (from 0 to n, missing one):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;
    printf("Missing number: %d\n", missing);

    return 0;
}


