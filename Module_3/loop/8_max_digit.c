//8.Write a program to find out the max from given number 
//(E.g., No: -1562 Max number is 6)
#include<stdio.h>
main(){
	int digit,num,max=0;
	
	printf("\n\n\t Enter number : ");
		scanf("%d",&num);
		
	while(num>0)
	{
		digit = num%10;
		if(digit>=max)
			max=digit;			
		num = num/10;
	}
	printf("\n\n\t Max number : %d",max);
}
