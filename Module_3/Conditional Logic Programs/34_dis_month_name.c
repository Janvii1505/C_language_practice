//34.Accept month number and display month name
#include<stdio.h>
main(){
	int month;
	printf("\n\n\t Enter the no. of month : ");
	scanf("%d",&month);
	
	if (month == 1) {
        printf("\n\n\t The month is January.");
    } else if (month == 2) {
        printf("\n\n\t The month is February.");
    } else if (month == 3) {
        printf("\n\n\t The month is March.");
    } else if (month == 4) {
        printf("\n\n\t The month is April.");
    } else if (month == 5) {
        printf("\n\n\t The month is May.");
    } else if (month == 6) {
        printf("\n\n\t The month is June.");
    } else if (month == 7) {
        printf("\n\n\t The month is July.");
    } else if (month == 8) {
        printf("\n\n\t The month is August.");
    } else if (month == 9) {
        printf("\n\n\t The month is September.");
    } else if (month == 10) {
        printf("\n\n\t The month is October.");
    } else if (month == 11) {
        printf("\n\n\t The month is November.");
    } else if (month == 12) {
        printf("\n\n\t The month is December.");
    } else {
        printf("\n\n\t Invalid month number.");
    }
}
