//1. Write a program in C to find the length of a string without using library functions.
#include<stdio.h>
main()
{
	char c[50],i;
	int l=0;
	
	printf("Enter any string : ");
	gets(c);
	
	for(i=0;c[i]!='\0';i++)
	{
		l++;
	}
	
	printf("Length of the string is : %d",l);
}
