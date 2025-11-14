//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements (including the repeated one): ");
    scanf("%d", &n);

    int arr[n];
    int max = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) max = arr[i]; // Track max value to size the seen array
    }

    // Create a seen array to track occurrences
    int *seen = (int *)calloc(max + 1, sizeof(int));

    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            printf("Repeated element is: %d\n", arr[i]);
            free(seen);
            return 0;
        }
        seen[arr[i]] = 1;
    }

    printf("No repeated element found.\n");
    free(seen);
    return 0;
}

