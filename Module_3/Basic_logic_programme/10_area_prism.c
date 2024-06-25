//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
main(){
	int l,h,w,area;
	
	printf("\n\n\t Enter any number for length: ");
	scanf("%d",&l);
	
	printf("\n\n\t Enter any number for height: ");
	scanf("%d",&h);
	
	printf("\n\n\t Enter any number for width: ");
	scanf("%d",&w);
	
	area = 2*(w*l+h*l+h*w);
	printf("\n\n\t Circumference of Triangle is  : %d",area);
	
	
}
