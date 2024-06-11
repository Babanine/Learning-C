#include <stdio.h>
#include <math.h>

int main(){

    const double pi = 3.141592653589793;
    double r, a , c;

    printf("\n === Circle calculator === ");

    printf("\nRadius = ");
    scanf("%lf", &r);

    c = 2 * pi * r;
    a = pi * r * r;
    
    printf("\nCircumference = %lf", c);
    printf("\nArea = %lf", a);

    return 0;

}