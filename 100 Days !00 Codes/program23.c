#include <stdio.h>
#include <stdlib.h>

/* Q23: Write a program to calculate a library fine based on late days.*/
/* Fine amount:
   for first 10 days fine beomes Rs2 per day.
   for the next 10 days fine becomes Rs4 per day.
   for the next 10 days fine becomes Rs6 per day.
   for more than 30 days the membership of the user gets cancelled.*/

int main() {
	int days,fine=0;
	
	printf("Enter number of days for which fine is going to be applied: ");
	scanf("%d",&days);
	
	if(days>=1 && days<=10)
	{
		fine=days*2;
		printf("The fine amount is: Rs %d",fine);
	}
	else if(days>10 && days<=20)
	{
		fine=((days-10)*4)+20;
		printf("The fine amount is: Rs %d",fine);
	}
	else if(days>20 && days<=30)
	{
		fine=((days-20)*6)+20+40;
		printf("The fine amount is: Rs %d",fine);
	}
	else if(days==0)
	{
		printf("There is no fine amount.");
	}
	else if(days>30)
	{
		printf("Membership Terminated.");
	}
	else
	{
		printf("Enter valid number of days.");
	}
	
	
	return 0;
}