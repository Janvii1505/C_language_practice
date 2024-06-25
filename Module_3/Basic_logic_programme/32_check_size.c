//32. Accept 2 numbers and find out its sum check it size.
#include<stdio.h>
main()
{
	int n1,n2,sum=0;
	printf("\n\n\t Enter number1 : ");
	scanf("%d",&n1);
	
	printf("\n\n\t Enter number2 : ");
	scanf("%d",&n2);
	
	sum = n1+n2;
	printf("\n\n\t sum is : %d",sum);
	printf("\n\n\t Size is : %d",sizeof(sum));
}
