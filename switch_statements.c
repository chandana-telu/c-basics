#include <stdio.h>

int main(){

    /* switch = A more efficient alternative to using many else if statements.
        allows a value to be tested for equality for many cases */
    
    char grade;

    printf("enter your letter grade\n");
    scanf("%c", &grade);
    
    switch(grade){
        case 'A':
            printf("perfect!\n");
            break;

        case 'B':
            printf("perfect!\n");
            break;

        case 'C':
            printf("you did okay!\n");
            break;

        case 'D':
            printf("at least it's not not an F!\n");
            break;

        case 'F':
            printf("you failed!\n");
            break;

        default:
            printf("the grade doesn't exist");
    }
    return 0;
}
