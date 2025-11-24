#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    int result = -1; // Default if no ceil found

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            // If element is equal to x, move left to find first occurrence if duplicates
            result = mid;
            right = mid - 1;
        }
        else if (arr[mid] < x) {
            left = mid + 1;
        }
        else { // arr[mid] > x
            result = mid;
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, x;

    // Input size of array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);

    printf("%d\n", index);

    return 0;
}
