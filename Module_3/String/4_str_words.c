//4. Write a program in C to count the total number of words in a string.
#include<stdio.h>
main()
{
	char str[50];
	int words=0,i;
	
	printf("Enter any string : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' '){
			words++;
		}
	}	
	printf("Total Words in String is : %d",words+1);
}
