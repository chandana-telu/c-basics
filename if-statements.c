#include <stdio.h>

int main(){

    int age; 

    printf("\n enter age:");
    scanf("%d", &age);

    if(age >= 18){
        printf("you are now signed up");
    }
    else if(age < 0){
        printf("you havent been born yet");
    }
    else if(age == 0){
        printf("you are an infant");
    }
    else{
        printf("you are too young to sign up");
    }

    return 0;
}