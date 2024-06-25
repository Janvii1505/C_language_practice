//17. Calculate 5 numbers from user and calculate number of even and 
//odd using of while loop
#include <stdio.h>

main() {
    int n,ecount=0,ocount=0,i=0;
    while(i<5)
    {
    	printf("\n\n\t Enter number%d : ",i+1);
    	scanf("%d",&n);
    	i++;
    	
    	if(n%2==0){
    		ecount+=1;
		}
		else{
			ocount+=1;
		}
	}
	
	printf("\n\n\t Count of Even number is : %d",ecount);
	printf("\n\n\t Count of Odd number is : %d",ocount);
}
