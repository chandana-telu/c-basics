#include <stdio.h>
#include <stdbool.h>// for using bool datatype

int main(){

    // logical operator = && (AND), checks if two conditions are true

    float temp = 10;
    bool sunny = true;

    if (temp >= 0 && temp <= 30 && sunny == true){// can be written sunny == 1 or just sunny
        printf("\nthe weather is good\n");
    }
    else printf("the weather is bad");

    return 0;
}