//8.WAP to accept the height of a person in centimeters and categorize the person 
//according to their height.
#include<stdio.h>
main(){
	float h;
	
	printf("Enter the height in centimeters : ");
	scanf("%f",&h);
	
	if(h<=145.16)
		printf("person is short heighted");

 	
 	else if(h>145.16 & h<=182.88)
 		printf("person is medium heighted");
 		
 	else
 		printf("person is tall heighted");
	
	
}
