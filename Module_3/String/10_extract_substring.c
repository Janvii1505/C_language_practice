//10. Write a program in C to extract a substring from a given string
#include<stdio.h>
main()
{
	char str[50],ext_str[50];
	int pos,i,El;
	
	printf("Enter any string : ");
	gets(str);
	
	printf("Enter the position for the extract string : ");
	scanf("%d",&pos);
	
	printf("Enter the length of extract string : ");
	scanf("%d",&El);
	
	for(i=0;i<El;i++)
	{
		ext_str[i]=str[pos+i];
	}
	
	printf("Extract substring is : %s",ext_str);
}
