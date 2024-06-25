//31. Convert kilometers into meters
#include<stdio.h>
main()
{
	int km,m;
	printf("Enter kilometers : ");
	scanf("%d",&km);
	
	
	m = km*1000;
	printf("%d kilometers is approximately %d meters",km,m);
}
