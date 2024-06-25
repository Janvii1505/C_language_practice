//1. Display This Information using printf
//a. Your Name
//b. Your Birth date
//c. Your Age
//d. Your Address
#include <stdio.h>

main() {

    char name[50];
    char birthDate[20];
    int age;
    char address[100];

    printf("\n\n\t Enter your name: ");
    scanf("%s", &name);

    printf("\n\n\t Enter your birth date: ");
    scanf("%s", &birthDate);

    printf("\n\n\t Enter your age: ");
    scanf("%d", &age);

    printf("\n\n\t Enter your address: ");
    scanf("%s", &address);

    printf("\n\n\t Name: %s", name);
    printf("\n\n\t Birth Date: %s", birthDate);
    printf("\n\n\t Age: %d",age);
    printf("\n\n\t Address: %s", address);
}

