//22.Accept 3 numbers from user using while loop and check each numbers palindrome.
#include<stdio.h>
main()
{
	int i=0;
	int n,rev,digit,num;
	while(i<3)
	{
		printf("\n\n\t Enter number%d : ",i+1);
		scanf("%d",&n);
		
		num=n;
		rev=0;
		
		while(n!=0)
		{	
			digit = n%10;
			rev = rev*10+digit;
			n=n/10;
		}
		if(rev == num)		
			printf("\n\n\t %d is palindrome number",num);		
		else		
			printf("\n\n\t %d is not palindrome number",num);
		
		i++;
	}	
}
