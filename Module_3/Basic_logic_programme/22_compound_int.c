//22. Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P
#include<stdio.h>
main(){
	int p,t;
	float r,i;
	
	printf("\n\n\t Enter your balance: ");
	scanf("%d",&p);
	
	printf("\n\n\t Enter the interest rate: ");
	scanf("%f",&r);

	
	printf("\n\n\t Enter the time period: ");
	scanf("%d",&t);
	
	i = p*(1+(r/100))*t;
	c = i-p;
	
	printf("\n\n\t compound interest is : %.2f",c);
	
	
}
