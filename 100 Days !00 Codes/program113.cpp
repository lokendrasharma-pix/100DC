#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort (ascending order)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int kthSmallest(int arr[], int n, int k) {
    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    // Return k-th smallest element (1-based indexing)
    return arr[k - 1];
}

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k\n");
        return 1;
    }

    int result = kthSmallest(arr, n, k);
    printf("%d\n", result);

    return 0;
}
