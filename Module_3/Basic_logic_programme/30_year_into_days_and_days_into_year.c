//30. WAP to convert years into days and days into years
#include<stdio.h>
main()
{
	int years,days,rdays;
	
	printf("\n\n\t Enter years : ");
	scanf("%d",&years);	
	days = years*365;	
	printf("\n\n\t %d years is approximately %d days.",years,days);
	
	printf("\n\n\t Enter days : ");
	scanf("%d",&days);	
	years = days/365;
	rdays = days%365;	
	printf("\n\n\t %d days is approximately %d years and remaining days is %d.",days,years,rdays);
}
