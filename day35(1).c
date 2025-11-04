//Find the second largest element in an array.


#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], size, i;
    int largest = INT_MIN, secondLargest = INT_MIN;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);

        // Update largest and second largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Check if second largest was found
    if (secondLargest == INT_MIN) {
        printf("There is no second largest element (all elements may be equal).\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
