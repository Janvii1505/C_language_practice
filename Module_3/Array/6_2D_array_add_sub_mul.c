//6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array.
#include<stdio.h>
main()
{
	int i,j,k,r,c,r1,c1,arr[20][20],arr1[20][20],result[20][20];	
	printf("\n\n\t How many rows required for Matrix : ");
	scanf("%d",&r);
	printf("\n\n\t How many cols required for Matrix : ");
	scanf("%d",&c);
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++){
			printf("\n\t arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}		
	}
	
	printf("\n\n\t How many rows required for Matrix : ");
	scanf("%d",&r1);
	printf("\n\n\t How many cols required for Matrix : ");
	scanf("%d",&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++){
			printf("\n\t arr[%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("Addition of 2 matrix \n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf(" %d",arr[i][j]+arr1[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Substraction of 2 matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf(" %d",arr[i][j]-arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("Substraction of 2 matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c1;j++)
		{
			result[i][j]=0;
			for(k=0;k<c;k++){
				result[i][j] +=	arr[i][k]*arr1[k][j];
			}
		}
	}
	
	printf("Multiplication of 2 matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf(" %d",result[i][j]);
		}
		printf("\n");
	}
}
