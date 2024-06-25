//8. WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
main()
{
	char str[100],rev_str[100];
	int len,i,j,flag=0;
	
	printf("Enter any string : ");
	gets(str);
	len = strlen(str);
	for(i=len-1,j=0;j<len;i--,j++)
	{
		rev_str[j]=str[i];
	}
	
	for(i=0;i<len;i++)
	{
		if(rev_str[i]==str[i])
			flag=1;
	}
	
	if(flag==1)
	{
		printf("String is palindrom.");
	}
	else{
		printf("String is not palindrome.");
	}
	
}
