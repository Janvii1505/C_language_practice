//25.Accept 5 expense from user and find average of expense
#include<stdio.h>
main(){
	int E1,E2,E3,E4,E5,avg;

	printf("enter the salary of emp1 : ");
	scanf("%d",&E1);	
	printf("enter the salary of emp2 : ");
	scanf("%d",&E2);
	printf("enter the salary of emp3 : ");
	scanf("%d",&E2);
	printf("enter the salary of emp4 : ");
	scanf("%d",&E4);
	printf("enter the salary of emp5 : ");
	scanf("%d",&E5);
	
	avg = (E1+E2+E3+E4+E5)/5;
	
	printf("Avg of Expense is %d",avg);
}

