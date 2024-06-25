//27.Convert days into months
#include<stdio.h>
main()
{
	int days,months,rdays;
	printf("Enter Days : ");
	scanf("%d",&days);
	
	months = days/30;
	rdays = days%30;
	printf("Total months is %d and remaining Days is %d",months,rdays);
}
