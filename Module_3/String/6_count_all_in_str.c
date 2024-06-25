//6. Write a program in C to count the total number of alphabets, digits 
//and special characters in a string.
#include<stdio.h>
main()
{
	char str[50];
	int i,Acount=0,Dcount=0,Scount=0;
	
	printf("Enter any string : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0')
			Dcount++;
		else if(str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='%'||str[i]=='&')
			Scount++;
		else
			Acount++;
	}
	printf("\n\n\t Total Alphabets : %d",Acount);
	printf("\n\n\t Total Digits : %d",Dcount);
	printf("\n\n\t Total Special characters : %d",Scount);
}
