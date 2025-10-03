#include <stdio.h>
#include <stdlib.h>

/* Q32: Write a program to check if a number is a palindrome.*/

int main() {
	int num,original,digit,rev=0;
	printf("Enter the number to check palindrome: ");
	scanf("%d",&num);
	
	original=num;
	while(num>0)
	{
		digit=num%10;
		rev=rev*10+digit;
		num=num/10;
	}
	if(rev==original)
	{
		printf("The number is palindrome");
	}
	else
	{
		printf("Number is not palindrom");
	}
	
	
	
	return 0;
}