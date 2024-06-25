//32. Write a C program to input basic salary of an employee and 
//calculate its Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80% 
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%
#include<stdio.h>
main(){
	int sal;
	float gsal;
	printf("\n\n\t Enter the salary : ");
	scanf("%d",&sal);
	
	
	if(sal<=10000){
		gsal = sal+(sal*0.20)+(sal*0.80);
		printf("\n\n\t Gross salary is : %.2f",gsal);
	}
	
	else if(sal<=20000){
		gsal = sal+(sal*0.25)+(sal*0.90);
		printf("\n\n\t Gross salary is : %.2f",gsal);
	}
	
	else{
		gsal = sal+(sal*0.30)+(sal*0.95);
		printf("\n\n\t Gross salary is : %.2f",gsal);
	}
}
