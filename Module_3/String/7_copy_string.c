//7. Write a program in C to copy one string to another string.
#include<stdio.h>
main()
{
	char str[50],cpystr[50],i,j;
	int l=strlen(str);
	printf("Enter any string : ");
	scanf("%s",str);
	
	for(i=0;i<l;i++){
		cpystr[i]=str[i];
	}
		
	printf("Copy String is : %s",cpystr);

	
	
}
