//9. WAP to show difference between Structure and Union.

#include<stdio.h>

struct Student  
{
	int rollno;       
	char name[20];
	int sub[5];
	float per;
	char grade;
}S[3]; 

union Student1  
{
	int rollno;       
	char name[20];
	int sub[5];
	float per;
	char grade;
}S1[3];

main()
{
	int i, total=0, j;
	
	for(j=0;j<3;j++) 
	{
			printf("\n\n\n\t Input details for student [%d]..",j+1);
			printf("\n\n\t Input Rollno : ");
			scanf("%d",&S[j].rollno);
	
			printf("\n\n\t Input Name : ");
			scanf("%s",&S[j].name);
	
			total=0;
			for(i=0;i<5;i++) //marks for students
			{
				printf("\n\n\n\t Input marks for Sub[%d] : ",i+1);
				scanf("%d",&S[j].sub[i]);
		
				total=total+S[j].sub[i];
			}
			S[j].per=total/5;
	}	
			
	for(j=0;j<3;j++) 
	{
			printf("\n\n\t -------------------------------");
			printf("\n\n\n\t Rollno : %d",S[j].rollno);
			printf("\n\n\t Name : %s",S[j].name);
			
			for(i=0;i<5;i++)
			{
				printf("\n\n\t Marks for sub [%d] : %d",i+1,S[j].sub[i]);
			}
			printf("\n\n\t Per : %f",S[j].per);
	}
	
	
	
	for(j=0;j<3;j++) 
	{
			printf("\n\n\n\t Input details for student [%d]..",j+1);
			printf("\n\n\t Input Rollno : ");
			scanf("%d",&S1[j].rollno);
	
			printf("\n\n\t Input Name : ");
			scanf("%s",&S1[j].name);
	
			total=0;
			for(i=0;i<5;i++) 
			{
				printf("\n\n\n\t Input marks for Sub[%d] : ",i+1);
				scanf("%d",&S1[j].sub[i]);
		
				total=total+S1[j].sub[i];
			}
			S1[j].per=total/5;
	}	
			
	for(j=0;j<3;j++) 
	{
			printf("\n\n\t -------------------------------");
			printf("\n\n\n\t Rollno : %d",S1[j].rollno);
			printf("\n\n\t Name : %s",S1[j].name);
			
			for(i=0;i<5;i++)
			{
				printf("\n\n\t Marks for sub [%d] : %d",i+1,S1[j].sub[i]);
			}
			printf("\n\n\t Per : %f",S1[j].per);
	}
}


 















