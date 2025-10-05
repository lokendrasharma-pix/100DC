// Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int maximum = array[0];

    for (i = 1; i < n; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
    }

    int minimum = array[0];

    for (i = 1; i < n; i++)
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
    }

    printf("Maximum element = %d\n", maximum);
    printf("Minimum element = %d\n", minimum);

    return 0;
}