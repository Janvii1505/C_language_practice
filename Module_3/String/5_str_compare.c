//5. Write a program in C to compare two strings without using string library functions.
#include<stdio.h>
main()
{
	char str[50],str1[50];
	int len,len1,i,j,temp=0;
	
	
	printf("Enter string1 : ");
	gets(str);
	len = strlen(str);
	
	printf("Enter String2 : ");
	gets(str1);
	len1 = strlen(str1);
	
	if(len==len1){
		for(i=0;i<len;i++){		
			if(str[i]==str1[i]){			
				temp=1;	
			}
			else{
				temp=0;
				break;	
			}	
		}
		if(temp==1){
			printf("\n string is matched");
		}
		else{
			printf("\n string is not matched");
		}
	}
	else{
		printf("\n string is not matched");
	}	
}
