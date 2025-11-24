#include <stdio.h>

void printMaxInSubarrays(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        // Find max in the current window arr[i..i+k-1]
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d", max);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
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

    printf("Enter the window size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size\n");
        return 1;
    }

    printMaxInSubarrays(arr, n, k);

    return 0;
}
