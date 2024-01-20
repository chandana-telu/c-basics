#include <stdio.h>

int main(){
    //array = a data structure that can store many values of the same data type

    double prices[5] = {5.0, 10.0, 15.0, 25.0, 20.0};
    //prices[0] = 5.0;
    //prices[1] = 10.0;
    //prices[2] = 15.0;
    //prices[3] = 25.0;
    //prices[4] = 20.0;


    printf("\n-------------------------------------\n");
    printf("%.2lf", prices[4]);
    

    printf("\n-------------------------------------\n");
    //printing an array using loops
    for(int i = 0; i<=4; i++){
        printf("\n%.2lf", prices[i]);
    }


    printf("\n-------------------------------------\n");
    for(int i = 0; i< sizeof(prices); i++){
        printf("\n%.2lf", prices[i]);
    }

    printf("\n--------------------------------------\n");
    for(int i = 0; i< sizeof(prices)/sizeof(prices[0]); i++){
        printf("\n%.2lf", prices[i]);
    }

    //2d array = an array, where each element is an entire array
    //              useful if you need a matrix, grid or a table of data

    int numbers[3][3] = {{1, 2, 3},
                         {2, 4, 6}};


    return 0;
}