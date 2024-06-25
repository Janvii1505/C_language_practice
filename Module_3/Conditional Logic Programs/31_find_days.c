//31. Write a program in C to read any Month Number in integer and display 
//the number of days for this month.
#include<stdio.h>
main(){
	int m;
	printf("Enter the no. of month : ");
	scanf("%d",&m);
	
	if(m==1|m==3|m==5|m==7|m==9|m==10|m==12){
		printf("31 days in this month");		
	}
	else if(m==4|m==6|m==8|m==11){
		printf("30 days in this month");
	}
	else{
		printf("28 days in this month");
	}
}
