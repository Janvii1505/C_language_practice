//12. Program of Armstrong Number in C Using For Loop & While Loop.
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0,temp;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    for (temp = num; temp != 0; ++n) {
        temp /= 10;
    }

    for (temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }
    
    

}

