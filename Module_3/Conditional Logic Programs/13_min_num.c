//13.WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
main(){
	int n1,n2,n3;
	
	printf("Enter any number : ");
	scanf("%d",&n1);
	printf("Enter any number : ");
	scanf("%d",&n2);
	printf("Enter any number : ");
	scanf("%d",&n3);
	
	if(n1<n2 && n1<n3)
		printf("Minimum Number is : %d",n1);
	
 	else if(n2<n1 && n2<n3)
 		printf("Minimum Number is : %d",n2);
 		
 	else
 		printf("Minimum Number is : %d",n3);
	
	
}
