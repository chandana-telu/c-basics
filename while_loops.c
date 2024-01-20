#include <stdio.h>
#include <string.h>

int main(){

    //while loop = repeats a section of cade possibly unlimited times
    //WHILE some condition remains true
    //a while loop may not execute at all

    char name[25];
    printf("\nwhat's your name?\n");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf("hello %s", name);

    return 0;
}