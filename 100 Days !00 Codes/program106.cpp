#include <stdio.h>

void findNextGreaterElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int nextGreater = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;  // Stop at first greater element on right
            }
        }
        printf("%d", nextGreater);
        if (i < n-1) {
            printf(", ");
        }
    }
    printf("\n");
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

    findNextGreaterElements(arr, n);

    return 0;
}
