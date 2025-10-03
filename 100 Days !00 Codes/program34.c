#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Q34: Write a program to check if a number is prime.*/

int main() {
	int num,i=2,prime;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num<2)
	{
		printf("the numebr is not Prime.");
	}
	while(i<=num/2)
	{
		if(num%i==0)
		{
			prime=1;
			break;
		}
		i=i+1;
	}
	if(prime==1)
	{
		printf("The number is not prime.");
	}
	else
	{
		printf("The number is prime.");
	}
	return 0;
}