#include <stdio.h>

void firstNegativeInWindow(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0;  // default if none found
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNegative = arr[j];
                break;
            }
        }
        printf("%d", firstNegative);
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

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size\n");
        return 1;
    }

    firstNegativeInWindow(arr, n, k);

    return 0;
}
