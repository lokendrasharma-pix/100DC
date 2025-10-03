#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Q17: Write a program to find the roots of a quadratic equation and categorize them.*/

int main() {
	float a,b,c,D,root1,root2;
	
	printf("Enter coefficient of Xsquare: ");
	scanf("%f",&a);
	
	printf("Enter coefficient of X: ");
	scanf("%f",&b);
	
	printf("Enter constant: ");
	scanf("%f",&c);
	
	D=(b*b)-(4*a*c);
	
	if(a==0)
	{
		printf("Not Quardratic");
	}
	else
	{
		if(D>0)
		{
			root1=(-b + sqrt(D)) / (2*a);		
			root2=(-b - sqrt(D)) / (2*a);
			printf("Roots are Real and Distinct and are: %0.2f,%0.2f",root1,root2);
		}
		else if(D==0)
		{
			root1=root2=(-b)/(2*a);
			printf("Roots are Real and same and are: %0.2f",root1);
		}
		else if(D<0)
		{
			a=2*a;
			b=b/a;
			D=(sqrt(-D))/a;
			printf("Roots are complex and are: \n");
			printf("-%0.2f + %0.2f i \n",b,D);	
			printf("-%0.2f - %0.2f i",b,D);
		}	
		
	}
	
	return 0;
}