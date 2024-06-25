//20. WAP program to print below output using for loop
//01 02 03 04 05 06 07 08 09 10
//11 12 13 14 15 16 17 18 19 20
//..............
//..............
//41 42 43 44 45 46 47 48 49 50

#include<stdio.h>
main()
{
	int i,count=0;
	for(i=0;i<50;i++)
	{
		if(count==10 | count==20 |count==30 |count==40 |count==50)
		{
			printf("\n");
		}
		printf(" %02d",i+1);
		count+=1;
	}
}
