//15.Calculate sum of 10 numbers using of while loop
#include<stdio.h>
main()
{
	int n,i=0,sum=0;
	while(i<10)
	{
		printf("Enter number%d : ",i+1);
		scanf("%d",&n);
		sum = sum+n;
		i++;
	}
	printf("Sum of 10 numbers is : %d",sum);
}
