//Delete an element from an array.
#include <stdio.h>

int main() {
    int arr[100], size, pos, i;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position to delete
    printf("Enter the position (0 to %d) of the element to delete: ", size - 1);
    scanf("%d", &pos);

    // Validate position
    if (pos < 0 || pos >= size) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left
        for (i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; // Reduce array size

        // Display updated array
        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}


