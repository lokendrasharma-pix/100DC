#include <stdio.h>
#include <stdlib.h>

/* Q36: Write a program to find the HCF (GCD) of two numbers.*/

int main() {
	int num1,num2,i,j,k,count;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	for(i=1;i<num2;i=i+1)
	{
		if(num1%i==0 && num2%i==0)
		{
			count=count+1;
			for(j=i;j<=count;j++)
			{
				if(j>=i)
				{
					printf("%d ",);
			}
		}	
	}
	
	return 0;
}