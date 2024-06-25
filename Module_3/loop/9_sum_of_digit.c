//9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
main()
{
	int num,digit,sum=0;
	printf("\n\n\t Enter number : ");
		scanf("%d",&num);
		
	while(num>0)
	{
		digit=num%10; 
		sum=sum+digit;
		num=num/10;
	}
	printf("\n\n\t Sum of digits : %d",sum);
}
