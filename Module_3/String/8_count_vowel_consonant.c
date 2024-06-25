//8. Write a program in C to count the total number of vowels or consonants in a string.
#include<stdio.h>
main(){
	char str[100],ch;
	int i,Vcount=0,Ccount=0;
	printf("\n\n\t Enter any string : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		char ch = str[i]; 
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
			Vcount++;
		else if((ch >= 'a' && ch <= 'z')){
			Ccount++;
		}
			
	}
	
	printf("\n\n\t Vowel : %d",Vcount);
	printf("\n\n\t Consonant : %d",Ccount);
}


