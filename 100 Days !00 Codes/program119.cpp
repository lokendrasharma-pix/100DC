#include <stdio.h>
#include <stdbool.h>

int findRepeatedElement(int arr[], int n) {
    bool visited[100000] = {false};  // Adjust size as needed based on constraints
    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == true) {
            return arr[i];
        }
        visited[arr[i]] = true;
    }
    return -1;  // Should not happen as per problem statement
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements (with exactly one repeated element):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated = findRepeatedElement(arr, n);
    printf("%d\n", repeated);

    return 0;
}
