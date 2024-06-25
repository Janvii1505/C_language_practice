//29.Convert minutes into seconds and hours
#include<stdio.h>
main()
{
	int minutes,seconds,hours;
	printf("Enter minutes : ");
	scanf("%d",&minutes);
	
	
	hours = minutes/60;
	seconds = minutes*60;
	
	printf("%d minutes is approximately %d hours,%d minutes and %d seconds.",minutes,hours,minutes,seconds);
}
