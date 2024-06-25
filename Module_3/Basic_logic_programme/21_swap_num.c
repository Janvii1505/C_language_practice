//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without 
//using 3rd variable
//with using 3rd variable
#include<stdio.h>
main(){
	int a,b,c;
	printf("\n\n\t Enter number 1: ");
	scanf("%d",&a);
	
	printf("\n\n\t Enter number 2: ");
	scanf("%d",&b);

	printf("\n\n\t with using 3rd number");
		
	printf("\n\n\t Before swapping");
	printf("\n\n\t Number 1 is  : %d",a);
	printf("\n\n\t Number 2 is  : %d",b);
	
	c = a;
	a = b;
	b = c;
		
	printf("\n\n\t After swapping");
	printf("\n\n\t Number 1 is  : %d",a);
	printf("\n\n\t Number 2 is  : %d",b);
	
//	without using 3rd number:

	printf("\n\n\t without using 3rd number");	
	printf("\n\n\t Enter number 1: ");
	scanf("%d",&a);
	
	printf("\n\n\t Enter number 2: ");
	scanf("%d",&b);
	printf("\n\n\t Before swapping");
	printf("\n\n\t Number 1 is  : %d",a);
	printf("\n\n\t Number 2 is  : %d",b);
	
	a = a+b;
	b = a-b;
	a = a-b;
		
	printf("\n\n\t After swapping");
	printf("\n\n\t Number 1 is  : %d",a);
	printf("\n\n\t Number 2 is  : %d",b);
	
	
}
