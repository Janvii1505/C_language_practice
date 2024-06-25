// 28) 1 2 3 6 9 18 27 54...

#include <stdio.h>

main() {
    int n, i, term = 1, next_term;
    float ratio;

    printf("\n\n\t Enter the number of terms: ");
    scanf("%d", &n);

    printf("\n\n\t The series is:");

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            ratio = 2.0; 
        } else {
            ratio = 1.5; 
        }

        next_term = term * ratio;
        printf(" %d", next_term);
        term = next_term;
    }

    printf("\n");

}

