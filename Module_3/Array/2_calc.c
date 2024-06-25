//2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.
//(Must Be Menu Driven)
#include<stdio.h>
main()
{
	int choice;
	float a,b;
	
	printf("------------------------------\n");
	printf("Enter 1 for the Addition\n");
	printf("Enter 2 for the Subtraction\n");	
	printf("Enter 3 for the Multiplication\n");	
	printf("Enter 4 for the Division\n");	
	printf("------------------------------\n");	
	
	printf("Enter choice between 1 to 4 : ");
	scanf("%d",&choice);
	
	printf("Enter number1 : ");
	scanf("%d",&a);
	printf("Enter numberb : ");
	scanf("%d",&b);	
	
	switch(choice)
	{
		case 1:
			printf("Addition of numbers is : %d",a+b);
			break;
		case 2:
			printf("Subtraction of numbers is : %d",a-b);
			break;
		case 3:
			printf("Multiplication of numbers is : %d",a*b);
			break;
		case 4:
			printf("Divivsion of numbers is : %f",a/b);	
			break;	
	}
}
