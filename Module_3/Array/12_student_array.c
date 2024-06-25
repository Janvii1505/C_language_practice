//12. WAP to accept 5 students name and store it in array
#include <stdio.h>
main() {
    char students[5][100];  
    int i;

    for (i = 0; i < 5; i++) {
        printf("\n\n\t Enter name of student %d: ", i + 1);
        scanf(" %s", students[i]);  
    }
    printf("\n\n\t Names of students:");
    for (i = 0; i < 5; i++) {
        printf("\n\n\t Student %d: %s", i + 1, students[i]);
    }

}

