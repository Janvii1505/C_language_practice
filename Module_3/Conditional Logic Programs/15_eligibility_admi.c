/*15.Write a C program to determine eligibility for admission to a professional course 
based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 
and Total in all three subject >=190 or Total in Maths and Physics >=140 -------------------------------------- 
Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in 
Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 
Total marks of Maths and Physics : 137 The candidate is not eligible.*/
#include<stdio.h>
main(){
	int M,P,C,total,MP;
	
	printf("Enter marks for Maths : ");
	scanf("%d",&M);
	printf("Enter marks for Physics : ");
	scanf("%d",&P);
	printf("Enter marks for Chemistry : ");
	scanf("%d",&C);
	
	total = M+P+C;
	MP = M+P;
	
	if(M>=65 && P>=55 && C>=50 && total>=190 &&MP>=140)
		printf("candidate is eligible.");
	
 	else
 		printf("candidate is not eligible.");
	
}
