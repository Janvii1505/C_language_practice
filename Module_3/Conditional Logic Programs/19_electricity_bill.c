/*19.Write a program in C to calculate and print the electricity bill of a 
given customer. The customer ID, name, and unit consumed by the user 
should be captured from the keyboard to display the total amount to be 
paid to the customer. The charge are as follow :
20. Unit
21. Charge/unit
22. upto 350
23. @1.20
24. 350 and above but less than 600
25. @1.50
26. 600 and above but less than 800
27. @1.80
28. 800 and above
29. @2.00*/
#include<stdio.h>
main(){
	int id;
	char c[10];
	float u;
	
	printf("\n\n\t Enter your name : ");
	scanf("%s",&c);
	printf("\n\n\t Enter your id : ");
	scanf("%d",&id);
	printf("\n\n\t Enter the unit : ");
	scanf("%f",&u);
	
	if(u<350)
		printf("\n\n\t Total charge is : %.2f",u*1.20);
	else if(u>=350 && u<600)
		printf("\n\n\t Total charge is : %.2f",u*1.50);
	else if(u>=600 && u<800)
		printf("\n\n\t Total charge is : %.2f",u*1.80);
	else
		printf("\n\n\t Total charge is : %.2f",u*2.00);
	
}
