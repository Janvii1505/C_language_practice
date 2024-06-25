//12.WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
main(){
	int n1,n2,n3;
	
	printf("Enter any number : ");
	scanf("%d",&n1);
	printf("Enter any number : ");
	scanf("%d",&n2);
	printf("Enter any number : ");
	scanf("%d",&n3);
	
	if(n1>n2 && n1>n3)
		printf("Maximum Number is : %d",n1);
	
 	else if(n2>n1 && n2>n3)
 		printf("Maximum Number is : %d",n2);
 		
 	else
 		printf("Maximum Number is : %d",n3);
	
	
}
