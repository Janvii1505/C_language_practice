//37. WAP to show
//i. Monday to Sunday using switch case
//ii. Vowel or Consonant using switch case
#include<stdio.h>
main()
{
	char c;
	char c1[10];
	printf("\n\n\t Enter a character to check : ");
	scanf("%c",&c);
	
	switch(c)
	{
		case 'a' : 
		case 'e' :
		case 'i' : 
		case 'o' : 
		case 'u' : 
		case 'A' : 
		case 'E' : 
		case 'I' : 
		case 'O' : 
		case 'U' : printf("\n\n\t Vowel");
				   break;
		default :  printf("\n\n\t Consonant");
				   break;			
	}
	
	
	printf("\n\n\t Enter a day name to check : ");
	scanf("%c",&c1);
	
	switch(c1)
	{
		case 'Monday':
			print("\n\n\t Today is Monday");
		case 'Tuesday':
			print("\n\n\t Today is Tuesday");
		case 'Wednesday':
			print("\n\n\t Today is Wednesday");
		case 'Thursday':
			print("\n\n\t Today is Thursday");
		case 'Friday':
			print("\n\n\t Today is Friday");
		case 'Satursday':
			print("\n\n\t Today is Satursday");
		case 'Sunday':
			print("\n\n\t Today is Sunday");
	}
}
