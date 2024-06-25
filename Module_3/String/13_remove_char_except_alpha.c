//13.Write a program in C to remove characters from a string except alphabets.
#include<stdio.h>
main()
{
	char str[50];
	int count=0,i;
	
	printf("Enter any string : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i] >= 'a' && str[i] <= 'z'|| str[i] >= 'A' && str[i] <= 'Z')
		{
			printf("%c",str[i]);
		}
		else{
			continue;
		}
	}
}
