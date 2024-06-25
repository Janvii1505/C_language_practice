//26.Convert temperature Fahrenheit to Celsius
#include<stdio.h>
main(){
	float f,c;

	printf("enter the Temperature in Fahrenheit : ");
	scanf("%f",&f);	
	
	c = 5/9*(f-32);
	
	printf("Tempreture in calcius is %f",c);
}

