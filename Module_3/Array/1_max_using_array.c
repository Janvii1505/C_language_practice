//1. Write a program to find out the max number from given array using function.
#include<stdio.h>
main()
{
	int n,i,arr[60];
	int max;
	
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>=max)
			max=arr[i];	
	}
	
	printf("Max number is : %d",max);
	
}
