//7. WAP to print number in reverse order e.g.: number = 64728 ---> 
//reverse = 82746
#include<stdio.h>
main(){
	int digit,num,rev=0;
	
	printf("\n\n\t Enter number : ");
		scanf("%d",&num);
		
	while(num>0){
		digit = num%10;
		rev = (rev*10)+digit;
		num = num/10;
	}
	printf("\n\n\t Reverse number : %d",rev);
}
