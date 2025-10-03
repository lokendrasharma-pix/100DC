#include <stdio.h>
#include <stdlib.h>

/* Q30: Write a program to reverse a given number.*/

int main(i) {
	int num,rem;
	printf("Enter the numebr: ");
	scanf("%d",&num);
	printf("The reverse of the number %d is :",num);
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		printf("%d",rem);
	}
	
	return 0;
}