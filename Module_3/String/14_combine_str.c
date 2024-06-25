//14.Write a program in C to combine two strings manually.
#include<stdio.h>
main()
{
	char str[50],str1[50],mrg_str[50];
	int len,len1,i,j;
	
	printf("Enter string1 : ");
	gets(str);
	len = strlen(str);
	
	printf("Enter String2 : ");
	gets(str1);
	len1 = strlen(str1);
	
	for(i=0;i<len;i++){
		mrg_str[i]=str[i];
	}
	
	for(i=0,j=len;i<len1;i++,j++){
		mrg_str[j]=str1[i];
	}
	
	printf("\n merge string is : ");
	puts(mrg_str);
}
