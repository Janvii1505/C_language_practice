//33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include <stdio.h>

main() {
    int num, power,result,i;
    
    printf("\n\n\t Enter an integer: ");
    scanf("%d", &num);

    for (power = 1; power <= 3; power++) {
        result = 1;
        for(i = 0; i < power; i++) {
            result *= num;
        }
        printf("\n\n\t %d^%d = %d", num, power, result);
    }

}
