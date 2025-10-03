#include <stdio.h>
#include <stdlib.h>

/* Q33: Write a program to check if a number is an Armstrong number.*/

int main() {
	int num,sum=0,rem,original;
	printf("Enter a number: ");
	scanf("%d",&num);
	original=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	if(sum==original)
	{
		printf("The Number is Amstrong.");
		
	}
	else
	{
		printf("The number is not Amstrong.");
	}
	return 0;
}