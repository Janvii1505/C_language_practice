//3. WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers
#include<stdio.h>
main(){
	int i,n,Ecount=0,Ocount=0,Esum=0,Osum=0;
	while(i<10){
		printf("\n\n\t Enter number %d : ",i+1);
		scanf("%d",&n);
		
		if(n%2==0){
			Ecount += 1;
			Esum+=n; 
		}
		else{
			Ocount += 1;
			Osum+=n; 
		}
		i++;
	}
	
	printf("\n\n\t Even numbers : %d",Ecount);
	printf("\n\n\t Odd numbers : %d",Ocount);
	printf("\n\n\t Even numbers sum : %d",Esum);
	printf("\n\n\t Odd numbers sum : %d",Osum);
}
