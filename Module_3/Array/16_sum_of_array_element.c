//16.Accept 5 numbers from user and perform sum of array
#include<stdio.h>
main(){
	int n,i,j,temp;
	int arr[100],sum=0;
	
	
	printf("enter the length of array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("\n\n\t Input arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	
	printf("Sum of array is : %d",sum);
}
