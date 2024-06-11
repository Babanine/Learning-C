#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    double temp, result1, result2;

    printf("\n === Temperature Converter === ");

    printf("\nIs your temperature in:\nC.Celsius\nF.Farenheit\nK.Kelvin\n");
    scanf("%c", &unit);
    unit = toupper(unit);

    switch (unit){
    case 'C':
        printf("\nYour temperature in Celsius: ");
        scanf("%lf", &temp);
        result1 = (temp * 9/5) + 32;
        result2 = temp + 273.15;
        printf("\nResult:\nF = %lf\nK = %lf", result1, result2);
        break;
    case 'F':
        printf("\nYour temperature in Farenheit: ");
        scanf("%lf", &temp);
        result1 = (temp - 32) * 5/9;
        result2 = (temp - 32) * 5/9 + 273.15;
        printf("\nResult:\nC = %lf\nK = %lf", result1, result2);
        break;
    case 'K':
        printf("\nYour temperature in Kelvin: ");
        scanf("%lf", &temp);
        result1 = temp - 273.15;
        result2 = (temp - 273.15) * 9/5 + 32;
        printf("\nResult:\nC = %lf\nF = %lf", result1, result2);
        break;
    default:
        printf("Please Enter a valid unit!");
        break;
    }
}