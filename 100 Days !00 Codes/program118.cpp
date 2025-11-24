#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int totalSum = n * (n + 1) / 2;
    int arrSum = 0;
    for (int i = 0; i < n; i++) {
        arrSum += arr[i];
    }
    return totalSum - arrSum;
}

int main() {
    int n;
    printf("Enter size of array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (contain numbers from 0 to n except one):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int missing = findMissingNumber(arr, n);
    printf("%d\n", missing);

    return 0;
}
