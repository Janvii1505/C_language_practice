//10.Write a program you have to make a summation of first and last Digit. 
//(E.g.,1234 Ans: -5)
#include<stdio.h>
main()
{
	int num,Last,sum=0,First;
	printf("\n\n\t Enter number : ");
		scanf("%d",&num);
	
	Last=num%10;
	while(num>=10)
	{
		num=num/10;
	}
	First = num;
	sum = Last+First;
	printf("\n\n\t Sum of First and Last digits : %d",sum);
}



