//14. Perform 2D matrix array
#include<stdio.h>
main(){
	int arr[20][20],r,c,rsize,csize;
	
	printf("\n\n\t Matrix-1");
	printf("\n\n\t Enter the length for the rows : ");
	scanf("%d",&rsize);
	
	printf("\n\n\t Enter the length for the cols : ");
	scanf("%d",&csize);
	
	for(r=0;r<rsize;r++)
	{		
		for(c=0;c<csize;c++)
		{
			printf("\n\n\t Enter arr[%d][%d] : ",r,c);
			scanf("%d",&arr[r][c]);			
		}
	}
	
	for(r=0;r<rsize;r++)
	{		
		for(c=0;c<csize;c++)
		{
			printf(" %d",arr[r][c]);			
		}
		printf("\n");
	}
		
}
