#include <stdio.h>

void mergeSortedArrays(int nums1[], int m, int nums2[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;
    // Merge arrays until one is exhausted
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    // Copy remaining elements from nums1
    while (i < m) {
        merged[k++] = nums1[i++];
    }
    // Copy remaining elements from nums2
    while (j < n) {
        merged[k++] = nums2[j++];
    }
}

int main() {
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d", &m);

    int nums1[m];
    printf("Enter elements of first sorted array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums2[n];
    printf("Enter elements of second sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int merged[m + n];
    mergeSortedArrays(nums1, m, nums2, n, merged);

    for (int i = 0; i < m + n; i++) {
        printf("%d", merged[i]);
        if (i < m + n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
