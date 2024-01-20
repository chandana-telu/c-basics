#include <stdio.h>

int main(){

    // accept a user input
    char name[25];
    int age;

    printf("\nwhat is your name?\n");
    /* scanf only reads upto any white spaces so if your string has any whitespaces scanf won't read the part after the white space.
    To do so we use fgets*/
    fgets(name, 25, stdin);//fname(name, strlen, stdin)
    printf("hello %s", name);

    printf("How old are you?\n");
    scanf("%d", &age);// precede the name of the value with ampresand. This indicates the address of the variable
    
    printf("\nyou are %d years old", age);

    return 0;
}