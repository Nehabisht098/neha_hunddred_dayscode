#include <stdio.h>

// Function to find the first occurrence of target
int findFirst(int nums[], int size, int target) {
    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            high = mid - 1; // Search left half
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

// Function to find the last occurrence of target
int findLast(int nums[], int size, int target) {
    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1; // Search right half
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int size, target;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int nums[size];
    printf("Enter sorted array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = findFirst(nums, size, target);
    int last = findLast(nums, size, target);

    if (first == -1 || last == -1) {
        printf("-1, -1\n");
    } else {
        printf("First occurrence at index: %d\n", first);
        printf("Last occurrence at index: %d\n", last);
    }

    return 0;
}

