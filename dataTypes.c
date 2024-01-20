#include <stdio.h>
#include <stdlib.h>

int main(){
//data types
    int age = 32;
    double gpa = 3.0;
    float sgpa = 7.5;
    char grade = 'O';
    char remarks[] = "good";           //string (array of characters)
    
    printf("\nage = %d ,gpa = %.1lf, sgpa = %.2f, grade = %c, remarks = %s", age, gpa, sgpa, grade, remarks);

    return 0;
}