//17. Calculate person’s insurance premium based on salary
#include<stdio.h>
main(){
	int s,y;
	printf("\n\n\t Enter your salary: ");
	scanf("%d",&s);
	
	printf("\n\n\t Enter the years left for retirement: ");
	scanf("%d",&y);
	
	printf("\n\n\t Insurance premium is : %d",s*y);
	
	
}
