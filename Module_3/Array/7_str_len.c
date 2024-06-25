//7. WAP Find out length of string without using inbuilt function.
#include<stdio.h>

int length(){
	char c[50],i;
	int l=0;
	
	printf("Enter any string : ");
	gets(c);
	
	for(i=0;c[i]!='\0';i++)
	{
		l++;
	}
	return l;
}

main()
{
//	char c[50],i;
//	int l=0;
//	
//	printf("Enter any string : ");
//	gets(c);
//	
//	for(i=0;c[i]!='\0';i++)
//	{
//		l++;
//	}
	int l1 = length();
	
	printf("Length of the string is : %d",l1);
}
