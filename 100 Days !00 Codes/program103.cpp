#include <stdio.h>

int findPivotIndex(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        // rightSum = totalSum - leftSum - arr[i]
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            return i;  // Pivot index found
        }
        leftSum += arr[i];
    }

    return -1;  // No pivot index found
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pivotIndex = findPivotIndex(arr, n);
    printf("%d\n", pivotIndex);

    return 0;
}
