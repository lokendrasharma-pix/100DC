// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/


#include <stdio.h>

int main()
{

    int i, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the value of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second_largest = arr[i - 1];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            largest = arr[i];
            second_largest = arr[i - 1];
        }
    }

    printf("The second largest element is %d", second_largest);
    return 0;
}