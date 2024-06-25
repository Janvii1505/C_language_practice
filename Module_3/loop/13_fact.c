//13.calculate the Factorial of a Given Number using while loop.
#include<stdio.h>
main()
{
	int n,fact=1;
	printf("Enter any number : ");
	scanf("%d",&n);
	
	if(n<0){
		printf("Factorial of given number is not possible");
	}
	else if(n==0){
		printf("Factorial of 0 is 0");
	}
	else{
		while(n>0)
		{
		fact = fact*n;
		n--;
		}
		printf("Factorial is : %d",fact);
	}	
}
