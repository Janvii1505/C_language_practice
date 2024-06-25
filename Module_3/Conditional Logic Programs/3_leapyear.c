//3. WAP to check if the given year is a leap year or not.
#include<stdio.h>
main(){
	int y;
	
	printf("enter the year : ");
	scanf("%d",&y);
	
	
	if(y%4 == 0)
		printf("Leap year");		
	
	else
		printf("Not a leap year");
}
