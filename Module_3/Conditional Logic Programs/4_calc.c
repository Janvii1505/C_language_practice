//4. WAP to make simple calculator.(operation include Addition, 
//Subtraction, Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
main(){
	int a,b;
	char s;
		
	printf("enter the number1 : ");
	scanf("%d",&a);
	
	printf("enter the number2 : ");
	scanf("%d",&b);
	
	printf("\n\n\t ----------- Arithmatic Operations --------------");
	printf("\n\n\t Press + for Addition");
	printf("\n\n\t Press - for Subtraction");
	printf("\n\n\t Press * for Multiplication");
	printf("\n\n\t Press / for Division");
	printf("\n\n\t ------------------------------------------------");
	
	printf("\n Enter the symbol for the operation : ");
	scanf(" %c",&s);

	if(s == '+')
		printf("Addition is %d",a+b);		
	
	else if(s == '-')
		printf("Substraction is %d",a-b);
		
	else if(s == '*')
		printf("Multiplication is %d",a*b);
		
	else if(s == '/')
		printf("Division is %d",a/b);
		
	else 
		printf("Modulo is %d",a%b);
}
