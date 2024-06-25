//15. Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
main(){
	int n,i,j,temp;
	int arr[100];
	
	
	printf("enter the length of array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("\n\n\t Input arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("\n\n\t %d",arr[i]);
	}
	
			
}
