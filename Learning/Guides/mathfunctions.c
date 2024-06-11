#include <stdio.h>
#include <math.h>

int main(){

    //To use math.h include <math.h>

    double A = sqrt(9);         //sqare root
    double B = pow(2, 4);       //power (base, power)
    int C = round(3.14);        //round
    int D = ceil(3.14);         //round up
    int E = floor(3.14);        //round down
    double F = fabs(-100);      //absolute value
    double G = log(3);          //logarithm
    double H = sin(45);         //sinus
    double I = cos(45);         //cosinus
    double J = tan(45);         //tangen

    printf("\nsqrt(9) = ......... %lf", A);
    printf("\npow(2, 4) = ....... %lf", B);
    printf("\nround(3.14) = ..... %d", C);
    printf("\nceil(3.14) = ...... %d", D);
    printf("\nfloor(3.14) = ..... %d", E);
    printf("\nfabs(-100) = ...... %lf", F);
    printf("\nlog(3) = .......... %lf", G);
    printf("\nsin(45) = ......... %lf", H);
    printf("\ncos(45) = ......... %lf", I);
    printf("\ntan(45) = ......... %lf", J);
}