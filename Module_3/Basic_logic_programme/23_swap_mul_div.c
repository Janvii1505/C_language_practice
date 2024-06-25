//23. WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
main(){
	int a,b;
	printf("\n\n\t Enter number 1: ");
	scanf("%d",&a);
	
	printf("\n\n\t Enter number 2: ");
	scanf("%d",&b);

	printf("\n\n\t Before swapping");
	printf("\n\n\t Number 1 is  : %d",a);
	printf("\n\n\t Number 2 is  : %d",b);
	
	a = a*b;
	b = a/b;
	a = a/b;
		
	printf("\n\n\t After swapping");
	printf("\n\n\t Number 1 is  : %d",a);
	printf("\n\n\t Number 2 is  : %d",b);
	
	
}
