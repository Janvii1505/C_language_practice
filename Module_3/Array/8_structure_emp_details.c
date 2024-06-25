#include<stdio.h>
struct emp
{
	int empno,age;
	char empname[20],address[50];
}S[5];

main()
{
	int i,total=0;
	
	for(i=0;i<5;i++){
		printf("\n\n\n\t Input details for student [%d]",i+1);
		printf("\n\n\t Input Employee no : ");
		scanf("%d",&S[i].empno);
		printf("\n\n\t Input Employee Name : ");
		scanf("%s",&S[i].empname);
		printf("\n\n\t Input Employee Address : ");
		scanf("%s",&S[i].address);
		printf("\n\n\t Input Employee Age : ");
		scanf("%d",&S[i].age);
	}
	
	for(i=0;i<5;i++){
		printf("\n\n\n\t Details of employee [%d]",i+1);
		printf("\n\n\t Employee no : %d",&S[i].empno);
		printf("\n\n\t Input Employee Name : %s",&S[i].empname);
		printf("\n\n\t Input Employee Address : %s",&S[i].address);
		printf("\n\n\t Input Employee Age : %d",&S[i].age);
	}	
}
