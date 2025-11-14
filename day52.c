//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.



int findCeilIndex(int arr[], int size, int x) {
    int low = 0, high = size - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            result = mid;      // Potential ceil found
            high = mid - 1;    // Try to find a smaller one on the left
        } else {
            low = mid + 1;     // Move right
        }
    }

    return result;
}

int main() {
    int size, x;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter sorted array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, size, x);

    if (index == -1) {
        printf("-1\n");
    } else {
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);
    }

    return 0;
}

