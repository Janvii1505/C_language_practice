//6. WAP to print Fibonacci series up to given numbers
#include<stdio.h>
main(){
	int i,num,a=0,b=1,c;
	
	printf("\n\n\t Enter number %d : ",i+1);
		scanf("%d",&num);
	
	printf("%d",a);
	printf(" %d",b);	
	while(i<num-2){
		c=a+b;
		a=b;
		b=c;
		printf(" %d",c);
		i++;
	}	
	
	
	
}
