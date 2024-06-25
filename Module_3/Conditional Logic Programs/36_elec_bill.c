//36. Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit For next 100 units Rs. 0.75/unit For next 100 units Rs. 1.20/unit For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill
#include<stdio.h>
main(){
	int u;
	float total;
	
	printf("\n\n\t Enter electricity unit : ");
	scanf("%d",&u);
	
	if(u <= 50)
    {
        total = u * 0.50;
        total= total+(total*0.20);
        printf("Total electricity bill : %.2f",total);
    }
    else if(u <= 150)
    {
        total = 25 + ((u-50) * 0.75);
        total= total+(total*0.20);
        printf("Total electricity bill : %.2f",total);
    }
    else if(u <= 250)
    {
        total = 100 + ((u-150) * 1.20);
        total= total+(total*0.20);
        printf("Total electricity bill : %.2f",total);
    }
    else
    {
        total = 220 + ((u-250) * 1.50);
        total= total+(total*0.20);
        printf("Total electricity bill : %.2f",total);
    }
}
