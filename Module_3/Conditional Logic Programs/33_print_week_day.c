//33.WAP to input the week number and print week day.
#include <stdio.h>
int main() {
    int Num;

    printf("\n\n\t Enter week number (1-7): ");
    scanf("%d", &Num);

    if (Num == 1) {
        printf("\n\n\t Monday");
    } else if (Num == 2) {
        printf("\n\n\t Tuesday");
    } else if (Num == 3) {
        printf("\n\n\t Wednesday");
    } else if (Num == 4) {
        printf("\n\n\t Thursday");
    } else if (Num == 5) {
        printf("\n\n\t Friday");
    } else if (Num == 6) {
        printf("\n\n\t Saturday");
    } else if (Num == 7) {
        printf("\n\n\t Sunday");
    } else {
        printf("\n\n\t Invalid week number. Please enter a number between 1 and 7.\n");
    }
}
