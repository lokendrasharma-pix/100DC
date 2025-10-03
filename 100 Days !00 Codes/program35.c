#include <stdio.h>
#include <stdlib.h>

/* Q35: Write a program to print all factors of a given number.*/

int main() {
	int num,i;
	printf("Enter a number to find its factors: ");
	scanf("%d",&num);
	printf("The Factors are: ");
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		printf("%d ",i);
	}
	
	return 0;
}