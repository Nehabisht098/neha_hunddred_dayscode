//Rotate an array to the right by k positions.

#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by k positions
void rotateRight(int arr[], int size, int k) {
    k = k % size;  // Handle cases where k > size

    // Step 1: Reverse the entire array
    reverse(arr, 0, size - 1);
    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Step 3: Reverse the remaining elements
    reverse(arr, k, size - 1);
}

int main() {
    int arr[100], size, k, i;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of positions to rotate
    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &k);

    // Rotate the array
    rotateRight(arr, size, k);

    // Display the rotated array
    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
