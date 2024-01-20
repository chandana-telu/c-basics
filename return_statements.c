#include <stdio.h>

double square(double x){
    double result = x * x;
    return result;
}

int main(){
    double x = square(3.14);

    printf("%.2lf", x);

    return 0;                  // 0 is the exit status if the code runs successfully thus the return type of main fuction is int.
}