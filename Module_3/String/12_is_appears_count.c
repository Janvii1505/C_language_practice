//12. Write a program in C to find the number of times a given word 'is' appears 
//in the given string.
#include<stdio.h>
main()
{
	char str[50];
	int count=0,i;
	
	printf("Enter any string : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='i'&&str[i+1]=='s')
		{
			count++;
		}
	}
	
	printf("%d times 'is' word appears",count);
}
