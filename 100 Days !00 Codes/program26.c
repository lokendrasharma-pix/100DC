#include <stdio.h>
#include <stdlib.h>

/* Q26: Write a program to print numbers from 1 to n. */


int main() {
	int n,i;
	printf("Enter the va,lue of n: ");
	scanf("%d",&n);
	printf("The numbers from 1 to %d is: \n",n);
	for(i=1;i<=n;i=i+1)
	{
		printf("%d ",i);
	}
	
	
	
	return 0;
}