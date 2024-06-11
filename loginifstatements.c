#include <stdio.h>

int main(){

    printf(" === Register ===");

    char name[25];
    int age;

    printf("\nName : ");
    scanf("%s", &name);

    printf("\nAge : ");
    scanf("%d", &age);

    if (age < 18){
        printf("\nYou are too young to sign up!");
    }
    else{
        printf("\nYou are now registerd!");
        printf("\n\n === Info === \nName : %s \nAge : %d", name, age);
    }
    
}