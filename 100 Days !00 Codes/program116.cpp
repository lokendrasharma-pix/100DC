#include <stdio.h>

void twoSum(int nums[], int n, int target) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return;
            }
        }
    }
    printf("-1 -1\n");
}

int main() {
    int n, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target value: ");
    scanf("%d", &target);

    twoSum(nums, n, target);

    return 0;
}
