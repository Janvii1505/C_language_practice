//11. Accept 5 names from user at run time.
#include<stdio.h>
main()
{
	char c[20],i;
	
	while(i<5){
		printf("Enter name %d: ",i+1);
		scanf("%s",&c[i]);
		i++;
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t %s",c[i]);
	}	
}
