#include <stdio.h>
#include <stdlib.h>

/* Q29: Write a program to calculate the factorial of a number. */

int main() {
	int n,i=1,factorial=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		factorial=i*factorial;
		i=i+1;
	}
	printf("The factorial till the number %d is: %d",n,factorial);
	
	
	return 0;
}