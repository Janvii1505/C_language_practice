//18.Write a C Program to Print the Multiplication Table of N
#include <stdio.h>

int main() {
    int n,i;

    printf("\n\n\t Enter an integer: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("\n\n\t %d * %d = %d", n, i, n * i);
    }

}
