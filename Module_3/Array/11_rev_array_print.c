//11. WAP to accept 5 numbers from user and display in reverse order 
//using for loop and array.
#include<stdio.h>
main()
{
	int i,j,n,arr[50],rev_arr[50];
	
	printf("Enter the length of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n\n\t Input arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=n-1,j=0;j<n;i--,j++)
	{
		rev_arr[j]=arr[i];
	}
	
	for(i=0;i<n;i++){
		printf("\n\n\t arr[%d] : %d",i,rev_arr[i]);
	}
}
