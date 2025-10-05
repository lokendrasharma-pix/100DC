// Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h>

int main() {

    int n;
    int positive_count=0;
    int negative_count=0;
    int zero_count=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int array[n];

    printf("Enter the elements: ");
    

    for (int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i=0; i<n; i++)
    {
        if (array[i]>0)
        {
            positive_count++;
        }

        else if (array[i]==0)
        {
            zero_count++;
        }

        else 
        {
            negative_count++;
        }
    }

    printf("number of positive nummber : %d\n", positive_count);
    printf("number of negative nummber : %d\n", negative_count);
    printf("number of zeros : %d", zero_count);
    return 0;

}