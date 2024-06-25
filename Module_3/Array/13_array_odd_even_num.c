//13. WAP to accept 5 numbers from user and check entered number is even or 
//odd using of array
#include<stdio.h>
main(){
	int n,i;
	int sum=0;
	int arr[n];
	
	printf("enter the length of array : ");
	scanf("%d",&n);
		
	for(i=0;i<n;i++){
		printf("\n\n\t Input arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		
		if(arr[i]%2==0){
			printf("\n\n\t %d is even number.",arr[i]);
		}
		else{
			printf("\n\n\t %d is Odd number.",arr[i]);
		}
	}		
	
	
		
}
