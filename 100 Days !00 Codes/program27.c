#include <stdio.h>
#include <stdlib.h>

/*Q27: Write a program to print the sum of the first n odd numbers. */

int main() {
	int n,i=1,sum=0,rep=1;
	
	printf("Enter the value of n to find the sum till the n'th natural number: ");
	scanf("%d",&n);
	while(rep<=n)
	{
		sum=sum+i;
		i=i+2;
		rep=rep+1;
		
	}
	printf("%d",sum);
		
	return 0;
}