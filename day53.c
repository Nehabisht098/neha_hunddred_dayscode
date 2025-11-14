//Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>

int findPivotIndex(int arr[], int size) {
    int totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < size; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            return i; // Found the pivot index
        }
        leftSum += arr[i];
    }

    return -1; // No pivot index found
}

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int pivotIndex = findPivotIndex(arr, size);
    printf("Pivot index: %d\n", pivotIndex);

    return 0;
}


🧪 Sample Input/Output
Input:
Enter size of array: 6
Enter array elements:
1 7 3 6 5 6


Output:
Pivot index: 3


Explanation:
- Left sum of index 3: 1 + 7 + 3 = 11
- Right sum of index 3: 5 + 6 = 11
- So index 3 is the pivot.
Let me know if you'd like to extend this to find all pivot indices or handle floating-point numbers.
