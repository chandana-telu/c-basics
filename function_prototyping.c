#include <stdio.h>

void hello(char[], int); //this is a function prototype

/*void hello(char name[, int age])
{
    printf("\nhello %s\n", name);
    printf("you are %d years old\n", age)
}*/

int main(){
    
    // function prototype

    // function declaraion, without a body, before main
    // ensures that calls to a function are made with the correct arguments
    
    char name[] = "james";
    int age = 21;

    //hello(name); 
    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("\nhello %s\n", name);
    printf("you are %d years old\n", age);
}
