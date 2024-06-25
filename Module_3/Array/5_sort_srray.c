//5. WAP to take two Array input from user and sort them in ascending or descending order 
//as per user’s choice
#include<stdio.h>
main()
{
	int i,j,n,n1,arr[200],arr1[200],choice,temp,temp1;
	
	printf("\n\tEnter the size of array1 : ");
	scanf("%d",&n);
		
	for(i=0;i<n;i++)
	{
		printf("\n\t arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n\t Enter the size of array2 : ");
	scanf("%d",&n1);
	
	for(i=0;i<n1;i++)
	{
		printf("\n\t arr[%d] : ",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("\n\n\t Enter choice 1 for ascending and 2 for descending : ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			for(i=0;i<n;i++){
				for(j=i+1;j<n;j++){
					if(arr[i]>arr[j])
						temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;					
				}
			}
			printf("\n Array1");
			for(i=0;i<n;i++){
				printf("\n\t %d",arr[i]);
			}
			for(i=0;i<n1;i++){
				for(j=i+1;j<n1;j++){
					if(arr1[i]>arr1[j])
						temp=arr1[i];
						arr1[i]=arr1[j];
						arr1[j]=temp;					
				}
			}		
			printf("\n Array2");
			for(i=0;i<n1;i++){
				printf("\n\t %d",arr1[i]);
			}
			break;
		
		case 2:
			for(i=0;i<n;i++){
				for(j=i+1;j<n;j++){
					if(arr[i]<arr[j])
						temp1=arr[i];
						arr[i]=arr[j];
						arr[j]=temp1;					
				}
			}
			printf("\n\t Array1");
			for(i=0;i<n;i++){
				printf("\n\t %d",arr[i]);
			}
			
			for(i=0;i<n1;i++){
				for(j=i+1;j<n1;j++){
					if(arr1[i]<arr1[j])
						temp1=arr1[i];
						arr1[i]=arr1[j];
						arr1[j]=temp1;					
				}
			}
			
			printf("\n\t Array2");
			for(i=0;i<n1;i++){
				printf("\n\t %d",arr1[i]);
			}
			break;
	}	
}
