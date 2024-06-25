//23. C Program to Reverse a Number Using FOR Loop
#include <stdio.h>

int main() {
    int num,n,reversed = 0;
    
    printf("\n\n\t Enter a number: ");
    scanf("%d", &num);

    for(n=num;n!=0;n/=10) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
    }

    printf("\n\n\t Reversed Number: %d", reversed);

}

