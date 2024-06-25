//16. Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>

main() {
    int n,sum = 0,i=1;

    printf("\n\n\t Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\n\n\t Please enter a positive integer.");
    } 
	else {
        while (i <= n) {
            sum += i;
            i++;
        }
        printf("\n\n\t The sum of the first %d natural numbers is %d", n, sum);
    }
}
