#include <stdio.h>

int kadaneMaxSubarraySum(int arr[], int n) {
    int maxSum = arr[0];
    int currentSum = arr[0];
    for (int i = 1; i < n; i++) {
        if (currentSum < 0) {
            currentSum = arr[i];
        } else {
            currentSum += arr[i];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    return maxSum;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = kadaneMaxSubarraySum(arr, n);
    printf("%d\n", maxSum);

    return 0;
}
