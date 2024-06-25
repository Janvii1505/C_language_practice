//6. Find the Character Is Vowel or Not
#include<stdio.h>
main(){
	char s;
	
	printf("enter the character : ");
	scanf("%c",&s);
	
	if(s=='A'|s=='E'|s=='I'|s=='O'|s=='U'|s=='a'|s=='e'|s=='i'|s=='o'|s=='u')
		printf("Character is vowel");		
	
	else
		printf("Character is consonent");
}
