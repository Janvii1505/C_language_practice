//3. Write a program in C to print individual characters of a string in reverse order.
#include<stdio.h>
main()
{
	char str[50],str_rev[20],i,j;
	int l;
	
	printf("Enter any string : ");
	gets(str);
	l=strlen(str);
	
	for(i=0,j=l-1;i<l;i++,j--)
	{
		printf("%c\n",str[j]);
	}
	
}
