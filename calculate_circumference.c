#include <stdio.h>

int main(){

    const double PI = 3.14159;
    double radius, circumference, area ;

    printf("\nEnter the radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("circumference: %lf", circumference);
    printf("\narea: %lf", area);


    return 0;
}