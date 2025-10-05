// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main()
{
    int num, digit;
    int r = 0;

    printf("Enter a number :");
    scanf("%d", &num);

    do
    {
        digit = num % 10;
        r = r + digit;
        num = num / 10;
    }

    while (num > 0);

    printf("Sum is %d", r);
    return 0;
}