#include <stdio.h>

int main(){

    char grade;

    printf("\nPlease enter your grade: ");
    scanf("%c", &grade);

    grade = toupper(grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect!\n");
        break;
    case 'B':
        printf("Good job!\n");
        break;
    case 'C':
        printf("Okay!\n");
        break;
    case 'D':
        printf("At least you passed!\n");
        break;
    case 'F':
        printf("You failed!\n");
        break;
    default:
        printf("Please enter only valid grades (ABCDF)");
        break;
    }
}