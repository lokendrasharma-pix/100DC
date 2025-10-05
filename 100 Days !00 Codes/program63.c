// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main()
{
    int num, digit;
    int i, max = 0, most;
    int count[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            most = i;
        }
    }

    printf("The digit that occurs most often is %d\n", most);

    return 0;
}