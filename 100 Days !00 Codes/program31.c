#include <stdio.h>
#include <stdlib.h>

/* Q31: Write a program to take a number as input and print its equivalent binary representation.*/

int main() {
	int num,rem,rev=1;
	printf("Enter the number to find its binary: ");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%2;
		rev=rem*10+rev;
		num=num/2;
		
	}
	printf("%d",rev);
	return 0;
}
	 