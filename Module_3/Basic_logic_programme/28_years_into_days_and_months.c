//28.Convert years into days and months.
#include<stdio.h>
main()
{
	int years,days,months;
	printf("Enter years : ");
	scanf("%d",&years);
	
	days = years*365;
	months = years*12;
	
	printf("Total days is %d and total months is %d",days,months);
}
