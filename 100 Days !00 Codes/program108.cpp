#include <stdio.h>

void productExceptSelf(int nums[], int n, int result[]) {
    int prefix[n];
    int suffix[n];

    // Compute prefix products
    prefix[0] = 1;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Compute suffix products
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // Compute result by multiplying prefix and suffix products
    for (int i = 0; i < n; i++) {
        result[i] = prefix[i] * suffix[i];
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result[n];
    productExceptSelf(nums, n, result);

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
