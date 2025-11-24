#include <stdio.h>

int maxSumSubarray(int arr[], int n, int k) {
    // Calculate sum of first window of size k
    int currentSum = 0;
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }

    int maxSum = currentSum;

    // Slide over rest of the elements
    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    return maxSum;
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

    int maxSum = maxSumSubarray(arr, n, k);
    printf("%d\n", maxSum);

    return 0;
}
