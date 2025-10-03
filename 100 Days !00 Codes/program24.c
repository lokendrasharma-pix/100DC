#include <stdio.h>
#include <stdlib.h>

/* Q24: Write a program to calculate an electricity bill based on units consumed. 
		Bill charge per unit consumption: 
		1. for the first 100 units charge per unit is Rs5. 
		2. for the next 100 units charge per unit is Rs10. 
		3. for the next 100 units charge per unit is Rs20. 
		4. for the next 100 units charge per unit is Rs30. 
		5. for the next 100 units charge per unit is Rs40.  
		6. for more than 500 units charge per unit is Rs50.
		*/

int main() {
	int bill=0,units_consumed;
	
	printf("Enter number of units consumed by the user: ");
	scanf("%d",&units_consumed);
	
	if(units_consumed==0)
	{
		printf("No bill is charged.");
		
	}
	else if(units_consumed>0 && units_consumed<=100)
	{
		bill=units_consumed*5;
		printf("The Bill amount is: Rs %d",bill);
	}
	
	else if(units_consumed>100 && units_consumed<=200)
	{
		bill=((units_consumed-100)*10)+500;
		printf("The Bill amount is: Rs %d",bill);
	}
	else if(units_consumed>200 && units_consumed<=300)
	{
		bill=((units_consumed-200)*20)+500+1000;
		printf("The Bill amount is: Rs %d",bill);	
	}
	else if(units_consumed>300 && units_consumed<=400)
	{
		bill=((units_consumed-300)*30)+500+1000+2000;
		printf("The Bill amount is: Rs %d",bill);	
	}
	else if(units_consumed>400 && units_consumed<=500)
	{
		bill=((units_consumed-400)*40)+500+1000+2000+3000;
		printf("The Bill amount is: Rs %d",bill);	
	}
	else if(units_consumed>500)
	{
		bill=((units_consumed-500)*50)+500+1000+2000+3000+4000;
		printf("The Bill amount is: Rs %d",bill);	
	}
	else
	{
		printf("Enter valid unit consumed by the user.");
	}
	return 0;
	
}