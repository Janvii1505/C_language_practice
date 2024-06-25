//12. Program of Armstrong Number in C Using For Loop & While Loop.
#include<stdio.h>
#include <math.h>
main()
{
	int n,sum,d,num,l;
	printf("Enter any number : ");
	scanf("%d",&n);
	
//	n=num;
	while(n>0)
	{
		n = n/10;
		++l;
	}
	printf("\n\n\t %d",l);
//	n=num;
	while(n>0)
	{
		d = n%10;
		sum = sum + pow(d,l);
		n = n/10;
	}
	
	if ((int)sum == num) {
        printf("%d is an Armstrong number.",n);
    } else {
        printf("%d is not an Armstrong number.", n);
    }
}
