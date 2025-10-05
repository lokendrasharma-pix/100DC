// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4

2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main()
{
    int rows1, columns1, rows2, columns2, rows, columns;

    printf("Enter number of rows for first matrix: ");
    scanf("%d", &rows1);

    printf("Enter number of columns for first matrix: ");
    scanf("%d", &columns1);

    printf("Enter number of rows for second matrix: ");
    scanf("%d", &rows2);

    printf("Enter number of columns for second matrix: ");
    scanf("%d", &columns2);

    if (rows1 != rows2 || columns1 != columns2)
    {
        printf("Matrix addition not possible. Both matrices must have the same dimensions.\n");
        return 0;
    }

    else if (rows1 == rows2 && columns1 == columns2)
    {
        int matrix1[rows1][columns1], matrix2[rows2][columns2], sum[rows][columns];

        printf("Enter elements of first matrix:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns1; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter elements of second matrix:\n");
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
        }

        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns1; j++)
            {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        printf("Sum of the two matrices:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns1; j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}