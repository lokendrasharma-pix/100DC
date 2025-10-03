#include <stdio.h>
#include <stdlib.h>

/* Q28: Write a program to print the product of even numbers from 1 to n.*/

int main() {
	int n,i,product=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i=i+1)
	{
		if(i%2==0)
		{
			product=product*i;
		}
	}
	printf("%d",product);
	
	return 0;
}