//20. Accept monthly salary from the user and deduct 10% insurance premium, 
//10% loan installment find out of remaining salary.
#include<stdio.h>
main(){
	int s,sal;
	printf("\n\n\t Enter your salary: ");
	scanf("%d",&s);

	sal = s - (s*0.1 + s*0.1);
	printf("\n\n\t Annual salary is : %d",sal);
	
	
}
