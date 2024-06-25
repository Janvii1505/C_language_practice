//17.Write a C program to check whether a triangle can be formed with the given values 
//for the angles.
#include<stdio.h>
main(){
	float a1,a2,a3,total;
	
	printf("Enter value for angle 1 : ");
	scanf("%f",&a1);
	printf("Enter value for angle 2 : ");
	scanf("%f",&a2);
	printf("Enter value for angle 3 : ");
	scanf("%f",&a3);
	
	if(a1+a2+a3 == 180)
		printf("Triangle can be formed.");
	else 
		printf("Triangle can't be formed.");
}
