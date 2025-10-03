#include <stdio.h>
#include <stdlib.h>

/*Q. Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %. */

int main() {
	int num1,num2;
	char op;
	
	printf("Enter the value of the first number: ");
	scanf("%d",&num1);
	
	printf("Enter the value of the second number: ");
	scanf("%d",&num2);
	
	printf("Enter the operator: ");
	scanf(" %c",&op);
	
	switch(op)
	{
		case '+':
			printf("The Sum of the two numbers is: %d",num1+num2);
			break;	
		case '-':
			printf("The difference of the two numbers is: %d",num1-num2);
			break;
		case '*':
			printf("The Product of the two numbers is: %d",num1*num2);
			break;
		case '/':
			printf("The Quotient is: %d",num1/num2);
			break;
		case '%':
			printf("The Remainder is: %d",num1%2);
	}
	return 0;
}