//5. WAP to print factorial of given number
#include<stdio.h>
main(){
	int i,num,fact=1;
	printf("\n\n\t Enter number for find factorial : ");
		scanf("%d",&num);
		
	for(i=1;i<=num;i++){
		fact = fact*i;
	}
	printf("\n\n\t Factorial of number is : %d",fact);
}
