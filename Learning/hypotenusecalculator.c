#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;

    printf("\n === Hypotenuse Calculator ===");

    printf("\nSide A = ");
    scanf("\n%lf", &a);

    printf("\nSide B = ");
    scanf("\n%lf", &b);

    c = sqrt(a*a + b*b);
    printf("C = %lf", c);

    return 0;
}